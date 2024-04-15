#include "FigureFactory.h"
#include <memory>

Pawn& FigureFactory::getPawn(int x, int y)
{
    return std::move(Pawn(x, y));
}

void FigureFactory::spawnFigures(int startX, int startY, int endX, int endY)
{
    
}