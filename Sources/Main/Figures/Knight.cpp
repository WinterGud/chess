#include "Knight.h"

Knight::Knight(int x, int y, int w, int h, Color color, const std::string& texturePath)
    : BaseFigure(x, y, w, h, color, texturePath)
{
}

Knight::~Knight()
{
}

bool Knight::checkMove(Coord coord)
{
    
    return false;
}

bool Knight::attack(const BaseFigure& attackedFigure)
{

    return false;
}
