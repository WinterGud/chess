#include "Pawn.h"

Pawn::Pawn(int x, int y, int w, int h, Color color, const std::string& texturePath)
    : BaseFigure(x, y, w, h, color, texturePath)
{
}

Pawn::~Pawn()
{
}

bool Pawn::checkMove(Coord coord)
{
    if (coord.x == m_currentCoord.x)
    {
        if (m_color == WHITE)
        {
            if (coord.y == m_currentCoord.y - 2 * CELL_HEIGHT && m_firstMove)
            {
                m_firstMove = false;
                return true;
            }
            if (coord.y == m_currentCoord.y - CELL_HEIGHT)
            {
                m_firstMove = false;
                return true;
            }
        }
        else if (m_color == BLACK)
        {
            if (coord.y == m_currentCoord.y + 2 * CELL_HEIGHT && m_firstMove)
            {
                m_firstMove = false;
                return true;
            }
            if (coord.y == m_currentCoord.y + CELL_HEIGHT)
            {
                m_firstMove = false;
                return true;
            }
        }
    }
    return false;
}

bool Pawn::attack(const BaseFigure& attackedFigure)
{
    if (m_color != attackedFigure.getColor())
    {
        if (m_color == WHITE)
        {
            if (m_currentCoord.y - CELL_WIDTH == attackedFigure.getY()
                && m_currentCoord.x + CELL_WIDTH == attackedFigure.getX()
                || m_currentCoord.x - CELL_WIDTH == attackedFigure.getX())
            {
                m_firstMove = false;
                return true;
            }
        }
        else if (m_color == BLACK)
        {
            if (m_currentCoord.y + CELL_WIDTH == attackedFigure.getY()
                && m_currentCoord.x + CELL_WIDTH == attackedFigure.getX()
                || m_currentCoord.x - CELL_WIDTH == attackedFigure.getX())
            {
                m_firstMove = false;
                return true;
            }
        }
    }
    return false;
}
