#pragma once

#include <vector>
#include "Cell.h"
#include "Player.h"

class Map
{
public:
    Map();
    auto getEntity(int x, int y) -> BaseEntity&;
    void draw();
    
protected:
    std::vector<Cell> m_listCells;
    std::shared_ptr<Player> m_whitePlayer;
    std::shared_ptr<Player> m_blackPlayer;

    bool m_is = false;
};
