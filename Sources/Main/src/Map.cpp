#include "Map.hpp"
#include <iostream>
#include "BaseCell.hpp"

namespace 
{
    const int32_t MAP_SIZE = 8;
}


Map::Map()
{
    m_cells = std::vector<BaseCell>(MAP_SIZE);
    m_cells = m_entityFactory.getCells(m_cells.size());
}

void Map::update()
{
    for (int i = 0; i < m_cells.size(); ++i)
    {
        m_cells[i].update();
    }
}

BaseEntity& Map::getFigure(int x, int y)
{
    BaseEntity blackEntity(x, y, BLACK);
    BaseEntity whiteEntity(x, y, WHITE);
    if (std::find(m_blackFigures.begin(), m_blackFigures.end(), blackEntity) != m_blackFigures.end())
    {
        return *std::find(m_blackFigures.begin(), m_blackFigures.end(), blackEntity);
    }
    else if(std::find(m_whiteFigures.begin(), m_whiteFigures.end(), whiteEntity) != m_whiteFigures.end())
    {
        return *std::find(m_whiteFigures.begin(), m_whiteFigures.end(), whiteEntity);
    }
    else if(std::find(m_cells.begin(), m_cells.end(), blackEntity) != m_cells.end)
    {
        return *std::find(m_cells.begin(), m_cells.end(), blackEntity);
    }
    else
    {
    }
}