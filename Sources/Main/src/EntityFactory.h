#pragma once
#include "BaseCell.hpp"
#include "Pawn.h"
#include <vector>


class EntityFactory
{
public:
    std::vector<BaseCell> getCells(int mapSize);
    Pawn& getPawn(int x, int y, color color);
    void spawnFigures(int startX, int startY, int endX, int endY);
};