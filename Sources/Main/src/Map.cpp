// #include "Map.hpp"
// #include <iostream>
// #include "BaseCell.hpp"
// #include "Constants.hpp"
//
// Map::Map()
// {
//     m_cells = std::vector<BaseCell>(MAP_SIZE);
//     m_cells = m_entityFactory.getCells(m_cells.size());
// }
//
// void Map::update()
// {
//     for (int i = 0; i < m_cells.size(); ++i)
//     {
//         m_cells[i].update();
//     }
// }
//
// BaseEntity& Map::getFigure(int x, int y)
// {
//     std::shared_ptr<BaseEntity> voidEntity = std::make_shared<BaseEntity>(x, y, WHITE);
//     std::shared_ptr<BaseCell> cell = std::make_shared<BaseCell>(x, y, WHITE);
//     BaseEntity blackEntity(x, y, BLACK);
//     BaseEntity whiteEntity(x, y, WHITE);
//     if (std::find(m_blackFigures.begin(), m_blackFigures.end(), blackEntity) != m_blackFigures.end())
//     { 
//         return *std::find(m_blackFigures.begin(), m_blackFigures.end(), blackEntity);
//     }
//     else if(std::find(m_whiteFigures.begin(), m_whiteFigures.end(), whiteEntity) != m_whiteFigures.end())
//     {
//         return *std::find(m_whiteFigures.begin(), m_whiteFigures.end(), whiteEntity);
//     }
//     else if(std::find(m_cells.begin(), m_cells.end(), blackEntity) != m_cells.end)
//     {
//         return *std::find(m_cells.begin(), m_cells.end(), blackEntity);
//     }
//     else if(std::find(m_cells.begin(), m_cells.end(), whiteEntity) != m_cells.end)
//     {
//         return *std::find(m_cells.begin(), m_cells.end(), whiteEntity);
//     }
//     else return *voidEntity;
// }