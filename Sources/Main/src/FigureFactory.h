#pragma once
#include "Pawn.h"


class FigureFactory
{
public:
    Pawn& getPawn(int x, int y, color color);
    void spawnFigures(int startX, int startY, int endX, int endY);
};