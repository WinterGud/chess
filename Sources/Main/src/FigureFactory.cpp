#include "FigureFactory.h"
#include <memory>

Pawn& FigureFactory::getPawn(int x, int y, color color)
{
    return std::move(Pawn(x, y, color));
}

void FigureFactory::spawnFigures(int startX, int startY, int endX, int endY)
{
    
}