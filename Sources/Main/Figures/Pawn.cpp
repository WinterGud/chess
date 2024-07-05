#include "Pawn.h"

Pawn::Pawn(int x, int y, int w, int h, Color color, const std::string& texturePath)
    : BaseFigure(x, y, w, h, color, texturePath)
{
}

Pawn::~Pawn()
{
    
}

bool Pawn::move(Coord coord)
{
    return true;
}

void Pawn::update()
{
}

bool Pawn::attack(BaseFigure& attackedFigure)
{
    return true;
}
