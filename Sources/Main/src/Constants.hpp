#pragma once
#include "SDL.h"
#include <string>
enum Color
{
    BLACK,
    WHITE,
    YELLOW,
};

constexpr int32_t SCREEN_WIDTH = 800;
constexpr int32_t SCREEN_HEIGHT = 800;

constexpr int32_t NUM_OF_COLUMNS = 8;

constexpr int32_t CELL_WIDTH = SCREEN_WIDTH / NUM_OF_COLUMNS;
constexpr int32_t CELL_HEIGHT = SCREEN_HEIGHT / NUM_OF_COLUMNS;




const std::string PATH_LOGGER_OUT = "..\\..\\..\\chess\\Sources\\Main\\log.txt";

const std::string PATH_PAWN_WHITE = "..\\..\\..\\chess\\Sources\\Main\\assets\\W_Pawn.png";
const std::string PATH_PAWN_BLACK = "..\\..\\..\\chess\\Sources\\Main\\assets\\B_Pawn.png";

const std::string PATH_BISHOP_WHITE = "..\\..\\..\\chess\\Sources\\Main\\assets\\W_Bishop.png";
const std::string PATH_BISHOP_BLACK = "..\\..\\..\\chess\\Sources\\Main\\assets\\B_Bishop.png";

const std::string PATH_KNIGHT_WHITE = "..\\..\\..\\chess\\Sources\\Main\\assets\\W_Knight.png";
const std::string PATH_KNIGHT_BLACK = "..\\..\\..\\chess\\Sources\\Main\\assets\\B_Knight.png";

const std::string PATH_ROOK_WHITE = "..\\..\\..\\chess\\Sources\\Main\\assets\\W_Rook.png";
const std::string PATH_ROOK_BLACK = "..\\..\\..\\chess\\Sources\\Main\\assets\\B_Rook.png";

const std::string PATH_QUEEN_WHITE = "..\\..\\..\\chess\\Sources\\Main\\assets\\W_Queen.png";
const std::string PATH_QUEEN_BLACK = "..\\..\\..\\chess\\Sources\\Main\\assets\\B_Queen.png";

const std::string PATH_KING_WHITE = "..\\..\\..\\chess\\Sources\\Main\\assets\\W_King.png";
const std::string PATH_KING_BLACK = "..\\..\\..\\chess\\Sources\\Main\\assets\\B_King.png";

const std::string PATH_CELL_WHITE = "..\\..\\..\\chess\\Sources\\Main\\assets\\W_Cell.png";
const std::string PATH_CELL_BLACK = "..\\..\\..\\chess\\Sources\\Main\\assets\\B_Cell.png";
const std::string PATH_BACKLIGHT = "..\\..\\..\\chess\\Sources\\Main\\assets\\illumination.png";