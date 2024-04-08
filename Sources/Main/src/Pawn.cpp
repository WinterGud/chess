#include "Pawn.hpp"

bool Pawn::move(int x, int y)
{
    if (firsMove)
    {
        
    }
    m_y += 1;
    return false;
}

bool Pawn::attack(int x, int y, BaseEntity& attackedFigure)
{
    m_x = attackedFigure.getX();
    m_y = attackedFigure.getY();
    attackedFigure.~BaseEntity();
    return false;
}