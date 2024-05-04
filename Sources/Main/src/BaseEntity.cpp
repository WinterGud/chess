#include <BaseEntity.hpp>

BaseEntity::BaseEntity(int x, int y, color color)
    : m_x(x)
    , m_y(y)
    , m_color(color)
{
    
}

BaseEntity::~BaseEntity()
{
    
}

void BaseEntity::draw()
{
}
