#ifndef GLOBALS_H
#define GLOBALS_H

#include "raylib.h"

#include <string>
#include <cstddef>
#include <cmath>

/* Game Elements */

const char WALL   = '#';
const char AIR    = ' ';
const char PLAYER = '@';
const char COIN   = '*';
const char EXIT   = 'E';
const char SPIKE  = 'S';
const char SLIME  = 'M';
const char ROCK   = 'R';
const char SPIKE1 = '1';

/* Levels */

struct level {
    size_t rows = 0, columns = 0;
    char *data = nullptr;
};
char LEVEL_1_DATA[] = {
    '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#',
    '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', '#',
    '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#',
    '#', ' ', ' ', ' ', ' ', '*', ' ', ' ', ' ', ' ', '#',
    '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#',
    '#', ' ', '@', ' ', 'M', ' ', ' ', ' ', 'E', ' ', '#',
    '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'
};

level LEVEL_1 = {
    7, 11,
    LEVEL_1_DATA
};

char LEVEL_2_DATA[] = {
    '#','#', '#', '#', '#', '#', '#', '#','#', '#', '#', '#', '#', '#', '#','#','#',
    '#',' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',' ',' ','#',
    '#',' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',' ',' ','#',
    '#',' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',' ',' ','#',
    '#',' ', ' ', ' ', ' ', ' ', '*', '*', ' ', '*', '*', ' ', ' ', ' ',' ',' ','#',
    '#',' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'R', ' ', ' ',' ','E','#',
    '#',' ', ' ', ' ', ' ', '#', ' ', ' ', '#', ' ', ' ', '#', '#', '#','#','#','#',
    '#',' ', ' ', ' ', '#', '#', ' ', ' ', '#', ' ', ' ', '#', '#', '#','#','#','#',
    '#','@', ' ', '#', '#', '#', ' ', ' ', '#', ' ', ' ', '#', '#', '#','#','#','#',
    '#', '#', '#', '#', '#', '#','S', 'S', '#', 'S', 'S', '#', '#', '#','#','#','#',

};
level LEVEL_2 = {
    13, 17,
    LEVEL_2_DATA
};
char LEVEL_3_DATA[] = {
    '#','#', '#', '#', '#', '#', '#', '#','#', '#', '#', '#', '#', '#', '#','#','#',
    '#',' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',' ',' ','#',
    '#',' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',' ',' ','#',
    '#',' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',' ',' ','#',
    '#',' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',' ',' ','#',
    '#',' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',' ',' ','#',
    '#',' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', ' ',' ',' ','#',
    '#',' ', '*', ' ', ' ', ' ', ' ', '*', ' ', ' ', ' ', ' ', ' ', ' ',' ','E','#',
    '#',' ', ' ', ' ', '#', ' ', ' ', '#', ' ', ' ', '#', ' ',  ' ', '#','#','#','#',
    '#','@', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',' ',' ','#',
    '#','#', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',' ',' ','#',
    '#',' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',' ',' ','#',
    '#','S', 'S', 'S', 'S', 'S', 'S', 'S','S', 'S', 'S', 'S', 'S', 'S', 'S','S','#',

};
level LEVEL_3 = {
    13,17,
    LEVEL_3_DATA
};
char LEVEL_4_DATA[] = {
    '#','#', '#', '#', '#', '#', '#', '#','#', '#', '#', '#', '#', '#', '#','#','#',
    '#',' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',' ',' ','#',
    '#','R', 'M', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',' ',' ','#',
    '#','#', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', ' ',' ',' ','#',
    '#',' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', '#', ' ',' ',' ','#',
    '#',' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', '#', ' ', '#', ' ',' ',' ','#',
    '#',' ', ' ', ' ', ' ', ' ', '*', ' ', '#', ' ', '#', ' ', '#', ' ',' ',' ','#',
    '#',' ', ' ', ' ', ' ', ' ', '#', ' ', '#', ' ', '#', ' ', '#', ' ',' ',' ','#',
    '#',' ', ' ', ' ', '*', ' ', '#', ' ', '#', ' ', '#', ' ', '#', ' ',' ',' ','#',
    '#',' ', ' ', ' ', '#', ' ', '#', ' ', '#', ' ', '#', ' ', '#', ' ',' ',' ','#',
    '#','@', ' ', ' ', '#', ' ', '#', ' ', '#', ' ', '#', ' ', '#', ' ',' ','E','#',
    '#','#', '#', 'S', '#', 'S', '#', 'S', '#', 'S', '#','S',  '#', '#', '#','#','#',
};
level LEVEL_4 = {
    12,17,
    LEVEL_4_DATA
};
char LEVEL_5_DATA[] = {
    '#','#', '#', '#', '#', '#', '#', '#','#', '#', '#', '#', '#', '#', '#','#','#',
    '#',' ', '*', ' ', '#', '#', ' ', ' ', ' ', ' ', '#', '#', ' ', ' ','*',' ','#',
    '#',' ', 'R', ' ', '#', ' ', '*', ' ', ' ', '*', ' ', '#', ' ', ' ','R',' ','#',
    '#',' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ','#',' ','#',
    '#','*', ' ', ' ', '*', ' ', ' ', '*', '*', ' ', ' ', '*', ' ', ' ',' ','*','#',
    '#',' ', ' ', ' ', '#', '#', ' ', '#', '#', ' ', '#', '#', ' ', ' ',' ',' ','#',
    '#',' ', ' ', '#', '#', ' ', ' ', ' ', ' ', ' ', ' ', '#', '#', ' ',' ',' ','#',
    '#',' ', ' ', ' ', ' ', ' ', ' ', '*', '*', ' ', ' ', ' ', ' ', ' ',' ',' ','#',
    '#','#', ' ', ' ', '*', ' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', ' ',' ',' ','#',
    '#','@', ' ', ' ', '#', ' ', ' ', 'M', 'M', ' ', ' ', '#', ' ', ' ',' ','E','#',
    '#','#', '#', ' ', ' ', ' ', ' ', '#', '#', ' ', ' ', ' ', ' ', ' ','#','#','#',
    '#','#', '#', '#', '#', '#', '#', '#','#', '#', '#', '#', '#', '#', '#','#','#',
};
level LEVEL_5 = {
    13,17,
    LEVEL_5_DATA
};
char LEVEL_6_DATA[] = {
    '#','#', '#', '#', '#', '#', '#', '#','#', '#', '#', '#', '#', '#', '#','#','#',
    '#',' ', '1', '1', '1', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', ' ',' ',' ','#',
    '#',' ', ' ', ' ', ' ', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',' ',' ','#',
    '#',' ', ' ', '*', ' ', ' ', '#', '#', '#', '#', '#', ' ', ' ', ' ',' ','E','#',
    '#','*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#','#','#','#',
    '#','#', '#', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ','1','1','#',
    '#','#', '#', ' ', '#', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*',' ',' ','#',
    '#','#', '#', ' ', '#', '#', '#', '#', 'R', ' ', ' ', ' ', ' ', ' ','*',' ','#',
    '#','#', '1', ' ', '1', '#', '#', '#', '#', '#', '#', '#', '#', ' ',' ','*','#',
    '#',' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',' ','*','#',
    '#','*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '@', ' ', ' ', ' ',' ','#','#',
    '#','#', 'S', 'S', 'S', '#', '#', '#','#', '#', '#', '#', '#', '#', '#','#','#',
};
level LEVEL_6 = {
    13,17,
    LEVEL_6_DATA
};
int level_index = 0;
const int LEVEL_COUNT = 6;

level LEVELS[LEVEL_COUNT] = {
    LEVEL_1,
    LEVEL_2,
    LEVEL_3,
    LEVEL_4,
    LEVEL_5,
    LEVEL_6
};

/* Loaded Level Data */

level current_level;
char *current_level_data;

/* Player data */

const float GRAVITY_FORCE = 0.01f;
const float JUMP_STRENGTH = 0.3f;
const float MOVEMENT_SPEED = 0.1f;

Vector2 player_pos;
float player_y_velocity = 0;

bool rock_collision_sound_played = false;
bool slime_collision_sound_played = false;
bool player_dead = false;
bool is_player_on_ground;
int player_score = 0;
int jump_count = 0;
const int MAX_JUMPS = 2;

/* Graphic Metrics */

const float CELL_SCALE = 0.8f; // An aesthetic parameter to add some negative space around level
const float SCREEN_SCALE_DIVISOR = 700.0f; // The divisor was found through experimentation
                                           // to scale things accordingly to look pleasant.

Vector2 screen_size;
float screen_scale; // Used to scale str/UI components size and displacements based on the screen_size size
float cell_size;
Vector2 shift_to_center;

/* Fonts */

Font menu_font;

/* Display Text Parameters */

struct Text {
    std::string str;
    Vector2 position = { 0.50f, 0.50f };
    float size = 32.0f;
    Color color = WHITE;
    float spacing = 4.0f;
    Font* font = &menu_font;
};

Text game_title = {
    "PLATFORMER",
    { 0.50f, 0.20f },
    100.0f,
    RED
};

Text game_start_button = {
    "Press ENTER to start game",
    {0.50f, 0.50f},
    25.0f,
    WHITE
};
Text shadow_start_button = {
    "Press ENTER to start game",
    {0.295f, 0.70f},
    1.0f,
    RED
};

Text game_quit_button = {
    "Press Q to pause",
    {0.50f, 0.70f},
    25.0f,
    WHITE
};
Text game_over = {
    "YOU DIED",
    { 0.5f, 0.5f },
    100.0f,
    RED
};
Text quit_in_game_over_state = {
    "Press Enter to go back to menu",
    {0.5f, 0.65f},
    25.0f,
    RAYWHITE
};
Text game_paused = {
    "Press Enter to Resume",
{ 0.50f, 0.50f },
    50.0f,
    RAYWHITE
};
Text quit_in_pause_state = {
    "Press Q to Quit",
    {0.5f, 0.65f},
    50.0f,
    RED
};

Text victory_title = {
    "You Won!",
    { 0.50f, 0.50f },
    100.0f,
    RED
};
Text victory_subtitle = {
    "Press Enter to go back to menu",
    { 0.50f, 0.65f },
    25.0f,
    WHITE
};

/* Images and Sprites */
Texture2D background;
Texture2D wall_image;
//Texture2D air_image;
Texture2D exit_image;
Texture2D spike_image;
Texture2D rock_image;
Texture2D spike1_image;

struct sprite {
    size_t frame_count    = 0;
    size_t frames_to_skip = 3;
    size_t frames_skipped = 0;
    size_t frame_index    = 0;
    bool loop = true;
    size_t prev_game_frame = 0;
    Texture2D *frames = nullptr;
    size_t game_frame = 0;
};
sprite slime_sprite;
sprite coin_sprite;
sprite player_sprite;

/* Sounds */
Sound hurt_sound;
Music background_music;
Sound coin_sound;
Sound exit_sound;
Sound jump_sound;
Sound death_sound;
/* Victory Menu Background */

struct victory_ball {
    float x, y;
    float dx, dy;
    float radius;
};

const size_t VICTORY_BALL_COUNT     = 2000;
const float VICTORY_BALL_MAX_SPEED  = 2.0f;
const float VICTORY_BALL_MIN_RADIUS = 2.0f;
const float VICTORY_BALL_MAX_RADIUS = 3.0f;
const Color VICTORY_BALL_COLOR      = { 180, 180, 180, 255 };
const unsigned char VICTORY_BALL_TRAIL_TRANSPARENCY = 10;
victory_ball victory_balls[VICTORY_BALL_COUNT];

/* Frame Counter */

size_t game_frame = 0;

/* Game States */

enum game_state {
    MENU_STATE,
    GAME_STATE,
    PAUSE_STATE,
    VICTORY_STATE,
    GAME_OVER_STATE
};
game_state game_state = MENU_STATE;

/* Forward Declarations */

// GRAPHICS_H

void draw_text(Text &text);
void derive_graphics_metrics_from_loaded_level();
void draw_menu();
void draw_game_overlay();
void draw_level();
void draw_player();
void draw_pause_menu();
void create_victory_menu_background();
void animate_victory_menu_background();
void draw_victory_menu_background();
void draw_victory_menu();

// LEVEL_H

bool is_colliding(Vector2 pos, char look_for = '#', level &level = current_level);
char& get_collider(Vector2 pos, char look_for, level &level = current_level);

void load_level(int offset = 0);
void unload_level();

// PLAYER_H

void spawn_player();
void move_player_horizontally(float delta);
void move_player_vertically(float delta);
void update_player();

// ASSETS_H

void load_fonts();
void unload_fonts();

void load_images();
void unload_images();

void draw_image(Texture2D image, Vector2 pos, float width, float height);
void draw_image(Texture2D image, Vector2 pos, float size);

sprite load_sprite(
    const std::string &file_name_prefix,
    const std::string &file_name_suffix,
    size_t frame_count = 1,
    bool loop = true,
    size_t frames_to_skip = 3
);
void unload_sprite(sprite &sprite);
void draw_sprite(sprite &sprite, Vector2 pos, float width, float height);
void draw_sprite(sprite &sprite, Vector2 pos, float size);

void load_sounds();
void unload_sounds();

// UTILITIES_H

float rand_from_to(float from, float to);
float rand_up_to(float to);

#endif // GLOBALS_H