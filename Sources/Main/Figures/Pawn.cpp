#include "Pawn.h"

Pawn::Pawn(int x, int y)
    : BaseFigure(x, y)
{
}

bool Pawn::move(int x, int y)
{
    if (m_firsMove && (y == m_y + 2))
    {
        m_y += 2;
    }
    else
    {
        m_y += 1;
    }
    return true;
}

bool Pawn::attack(int x, int y, BaseFigure& attackedFigure)
{
    m_x = attackedFigure.getX();
    m_y = attackedFigure.getY();
    attackedFigure.~BaseFigure();
    return false;
}