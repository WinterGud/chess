#include "BaseFigure.hpp"

BaseFigure::BaseFigure(int x, int y, int w, int h, Color color, const std::string& texturePath)
    : BaseEntity(x, y, w, h, texturePath)
    , m_color(color)
{}

void BaseFigure::update()
{
}
