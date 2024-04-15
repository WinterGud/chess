#include "Map.hpp"

std::shared_ptr<BaseEntity>& Map::getEntity(int x, int y)
{
    return m_map[x][y];
}
