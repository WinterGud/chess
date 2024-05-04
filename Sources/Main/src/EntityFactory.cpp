#include "EntityFactory.h"
#include <memory>

std::vector<BaseCell> EntityFactory::getCells(int mapSize)
{
    std::vector<BaseCell> cellsList;
    for (int i = 0; i < mapSize; ++i)
    {
        for (int j = 0; j < mapSize; ++j)
        {
            if ((j + 1) % 2 == 0)
            {
                cellsList.push_back(BaseCell(i, j, WHITE));
            }
            else
            {
                cellsList.push_back(BaseCell(i, j, BLACK));
            }
        }
    }

    return std::move(cellsList);
}


void EntityFactory::spawnFigures(int startX, int startY, int endX, int endY)
{
    
}