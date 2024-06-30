#include "Cell.h"

Cell::Cell(int x, int y, int w, int h, const std::string& texturePath)
    : BaseEntity(x, y, w, h, texturePath)
    , m_highlight(false)
{
}

void Cell::draw()
{
    if (m_highlight)
    {
        BaseEntity::draw();
    }
}
