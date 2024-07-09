#include "Queen.h"

Queen::Queen(int x, int y, int w, int h, Color color, const std::string& texturePath)
    : BaseFigure(x, y, w, h, color, texturePath)
{
}

Queen::~Queen()
{
}

bool Queen::checkMove(Coord coord)
{

    return false;
}

bool Queen::attack(const BaseFigure& attackedFigure)
{

    return false;
}
