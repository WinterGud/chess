#include "BaseFigure.hpp"

BaseFigure::BaseFigure(int x, int y, int w, int h, color color, const std::string& texturePath)
    : BaseEntity(x, y, w, h, color, texturePath)
{}

void BaseFigure::draw()
{
    BaseEntity::draw();
}

void BaseFigure::update()
{
}
