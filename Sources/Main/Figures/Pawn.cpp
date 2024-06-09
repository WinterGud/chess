#include "Pawn.h"

Pawn::Pawn(int x, int y, int w, int h, Color color, const std::string& texturePath)
    : BaseFigure(x, y, w, h, color, texturePath)
{
}

bool Pawn::move(int x, int y)
{
    return true;
}

void Pawn::update()
{
}

bool Pawn::attack(int x, int y, BaseFigure& attackedFigure)
{
    return true;
}