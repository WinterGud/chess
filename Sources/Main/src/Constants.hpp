#pragma once
#include "SDL.h"
#include <string>
enum Color
{
    BLACK,
    WHITE,
};

constexpr int32_t SCREEN_WIDTH = 800;
constexpr int32_t SCREEN_HEIGHT = 800;

constexpr int32_t NUM_OF_COLUMNS = 8;

constexpr int32_t CELL_WIDTH = SCREEN_WIDTH / NUM_OF_COLUMNS;
constexpr int32_t CELL_HEIGHT = SCREEN_HEIGHT / NUM_OF_COLUMNS;

inline SDL_Window* window = nullptr;
inline SDL_Renderer* renderer = nullptr;

const std::string PAWN_WHITE = "..\\..\\..\\chess\\Sources\\Main\\assets\\W_Pawn.png";
const std::string PAWN_BLACK = "..\\..\\..\\chess\\Sources\\Main\\assets\\W_Pawn.png";

const std::string ILLUMINATION = "..\\..\\..\\chess\\Sources\\Main\\assets\\illumination.png";