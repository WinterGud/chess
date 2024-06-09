#include "Cell.h"

Cell::Cell(int x, int y, int w, int h, const std::string& texturePath)
    : BaseEntity(x, y, w, h, texturePath)
    , m_visible(false)
{
}

void Cell::draw()
{
    if (m_visible)
    {
        BaseEntity::draw();
    }
}
