#include "raylib.h"

#include "globals.h"
#include "level.h"
#include "player.h"
#include "graphics.h"
#include "assets.h"
#include "utilities.h"

void update_game() {
    game_frame++;

    if (IsKeyDown(KEY_RIGHT) || IsKeyDown(KEY_D)) {
        move_player_horizontally(MOVEMENT_SPEED);
        is_moving_right = true;
    }
    if (IsKeyDown(KEY_UP) || IsKeyDown(KEY_W)) {
        move_player_vertically(MOVEMENT_SPEED);
    }if (IsKeyDown(KEY_DOWN) || IsKeyDown(KEY_S)) {
        move_player_vertically(MOVEMENT_SPEED);
    }
    if (IsKeyDown(KEY_LEFT) || IsKeyDown(KEY_A)) {
        move_player_horizontally(-MOVEMENT_SPEED);
        is_moving_right = false;
    }

    // Calculating collisions to decide whether the player is allowed to jump: don't want them to suction cup to the ceiling or jump midair
    is_player_on_ground = is_colliding({player_pos.x, player_pos.y + 0.1f}, WALL);
    if ((IsKeyDown(KEY_UP) || IsKeyDown(KEY_W) || IsKeyDown(KEY_SPACE)) && is_player_on_ground) {
        player_y_velocity = -JUMP_STRENGTH * 0.7;
    }

    update_player();
    if (is_colliding(player_pos, COIN)) {
        player_score++;
        // Remove the coin from the level
        get_collider(player_pos, COIN) = AIR;
        PlaySound(coin_sound);
    }

    // Check for level exit
    if (is_colliding(player_pos, EXIT)) {
        level_index++;
        if (level_index < LEVEL_COUNT) {
            load_level();
            spawn_player();
        } else {
            game_state = VICTORY_STATE;
        }
        PlaySound(exit_sound);
    }
}
void draw_game() {
    switch (game_state) {
        case MENU_STATE:
        ClearBackground(BLACK);
        draw_menu();
        if(IsKeyPressed(KEY_ENTER)) {
            game_state = GAME_STATE;
            load_level(level_index);
        }
        break;

        case GAME_STATE:{
            ClearBackground(BLACK);
            draw_level();
            draw_game_overlay();
            draw_player();
            if(IsKeyDown(KEY_Q)) {
                game_state = PAUSE_STATE;
            }
        }
        break;

        case PAUSE_STATE:
            draw_pause_menu();
            if (IsKeyPressed(KEY_ENTER)) {
                game_state = GAME_STATE;
                ClearBackground(BLACK);
            }
        if(IsKeyPressed(KEY_Q)) {
            exit(0);
        }
        break;
        case VICTORY_STATE:
            draw_victory_menu();
        if (IsKeyPressed(KEY_ENTER)) {
            game_state = MENU_STATE;
            level_index = 0;
            player_score = 0;
        }
        break;
        default:
                break;
    }
}
const unsigned int wHeight = 480;
const unsigned int wWidth = 1024;
int main() {
    InitWindow(wWidth, wHeight, "Platformer");
    InitAudioDevice();

    SetTargetFPS(60);
    load_fonts();
    load_images();
    load_sounds();
    load_level();

    Texture2D player = LoadTexture("data/images/player/player0.png");
    //Texture2D air_image = LoadTexture("data/images/player/air.png");
    float x_pos = wWidth/2 - player.width/2;
    float y_pos = wHeight/2 - player.height/2;

    //PlayMusicStream(background_music);
    //SetMusicVolume(background_music, 0.5f);

    while (!WindowShouldClose()) {
        //UpdateMusicStream(background_music);

        BeginDrawing();
        DrawTexture(player,x_pos,y_pos,WHITE);
        //DrawTexture(air_image,x,y,WHITE);


        update_game();
        draw_game();

        EndDrawing();
    }
    unload_level();
    unload_sounds();
    unload_images();
    unload_fonts();

    //StopMusicStream(background_music);
    //UnloadMusicStream(background_music);
    CloseAudioDevice();
    CloseWindow();

    return 0;
}
