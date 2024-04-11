#include "Pawn.hpp"

bool Pawn::move(int x, int y)
{
    if (m_firsMove)
    {
        
    }
    m_y += 1;
    return false;
}

bool Pawn::attack(int x, int y, BaseFigure& attackedFigure)
{
    m_x = attackedFigure.getX();
    m_y = attackedFigure.getY();
    attackedFigure.~BaseFigure();
    return false;
}