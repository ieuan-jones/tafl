#include <stdint.h>

#define BLACK_PIECE_COUNT 24

struct State {
    uint8_t board[11][11];
    uint8_t white[12][2];
    uint8_t black[BLACK_PIECE_COUNT][2];
    uint8_t king[2];
    uint8_t white_count;
    uint8_t black_count;
    uint8_t turn;
};

struct MoveSet {
    uint8_t moves[BLACK_PIECE_COUNT][120][2];
    uint8_t moves_per_piece[BLACK_PIECE_COUNT];
    short int move_count;
};

void draw_board(struct State *state);