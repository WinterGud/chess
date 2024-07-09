#include "Bishop.h"

Bishop::Bishop(int x, int y, int w, int h, Color color, const std::string& texturePath)
    : BaseFigure(x, y, w, h, color, texturePath)
{
}

Bishop::~Bishop()
{
}

bool Bishop::checkMove(Coord coord)
{

    return false;
}

bool Bishop::attack(const BaseFigure& attackedFigure)
{

    return false;
}
