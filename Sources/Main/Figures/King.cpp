#include "King.h"

King::King(int x, int y, int w, int h, Color color, const std::string& texturePath)
    : BaseFigure(x, y, w, h, color, texturePath)
{
}

King::~King()
{
}

bool King::checkMove(Coord coord)
{

    return false;
}

bool King::attack(const BaseFigure& attackedFigure)
{

    return false;
}
