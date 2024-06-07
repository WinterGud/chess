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

inline SDL_Window* window = nullptr;
inline SDL_Renderer* renderer = nullptr;

const std::string PAWN_WHITE = "C:\\Users\\User\\Desktop\\chess\\Sources\\Main\\assets\\W_Pawn.png";