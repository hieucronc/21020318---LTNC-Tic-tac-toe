#pragma once

// kich thuoc ban co
const int N = 3; 

// Do phan giai cua so
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;
const int CELL_WIDTH = SCREEN_WIDTH / N;
const int CELL_HEIGHT = SCREEN_HEIGHT / N;

// Du lieu trong ban co
const int EMPTY = 0;
const int PLAYER_X = 1;
const int PLAYER_O = 2;

// Trang thai
const int RUNNING_STATE_FRIEND = 0;
const int RUNNING_STATE_AI = 1;
const int PLAYER_X_WON_STATE = 2;
const int PLAYER_O_WON_STATE = 3;
const int TIE_STATE = 4;
const int MENU_STATE = 5;
const int QUIT_STATE = 6;

typedef struct {
	int table[N * N];
	int player;
	int state;
} game_t;
