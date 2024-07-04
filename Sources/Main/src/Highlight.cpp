#include "Highlight.h"

Highlight::Highlight(int x, int y, int w, int h, Color color, const std::string& texturePath)
    : BaseEntity(x, y, w, h, color, texturePath)
    , m_highlight(false)
{
}

void Highlight::draw()
{
    if (m_highlight)
    {
        BaseEntity::draw();
    }
}
