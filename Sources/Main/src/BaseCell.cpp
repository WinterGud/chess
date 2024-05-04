#include "BaseCell.hpp"

BaseCell::BaseCell(int x, int y, color color)
    : BaseEntity(x, y, color)
{
}

void BaseCell::update()
{
    if (m_color == BLACK)
    {
        std::cout << 1;
    }
    else if (m_color == WHITE)
    {
        std::cout << 0;
    }
}

void BaseCell::draw()
{
}
