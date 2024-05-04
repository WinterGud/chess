#include "BaseFigure.hpp"

BaseFigure::BaseFigure(int x, int y, color color)
    : BaseEntity(x, y, color)
{}

void BaseFigure::draw()
{
    BaseEntity::draw();
}

void BaseFigure::update()
{
}
