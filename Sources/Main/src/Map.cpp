#include "Map.hpp"
#include <iostream>
#include "BaseCell.hpp"

Map::Map()
{
    for (int i = 0; i < m_map.size(); i++)
    {
        for (int j = 0; j < m_map.size(); j++)
        {
            m_map[i][j] = std::make_shared<Pawn>(Pawn(i, j, WHITE));
        }
    }

    for (int i = 0; i < m_map.size(); i++)
    {
        for (int j = 0; j < m_map.size(); j++)
        {
            m_map[i][j]->move();
        }
    }
}


std::shared_ptr<BaseEntity>& Map::getEntity(int x, int y)
{
    return m_map[x][y];
}
