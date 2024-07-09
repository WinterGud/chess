#include "BaseFigure.hpp"

BaseFigure::BaseFigure(int x, int y, int w, int h, Color color, const std::string& texturePath)
    : BaseEntity(x, y, w, h, color, texturePath)
    , m_currentCoord(x, y)
{
}

void BaseFigure::updateCurrentCoord()
{
    m_currentCoord.x = m_entityRect.x;
    m_currentCoord.y = m_entityRect.y;
}
