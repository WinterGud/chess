#include "Rook.h"

Rook::Rook(int x, int y, int w, int h, Color color, const std::string& texturePath)
    : BaseFigure(x, y, w, h, color, texturePath)
{
}

Rook::~Rook()
{
}

bool Rook::checkMove(Coord coord)
{

    return false;
}

bool Rook::attack(const BaseFigure& attackedFigure)
{

    return false;
}
