#pragma once

#include <vector>
#include "Cell.h"
#include "Player.h"

class Map
{
public:
    Map();
    void draw();
    
protected:
    std::vector<Cell> m_listCells;
    std::shared_ptr<Player> m_whitePlayer;
    std::shared_ptr<Player> m_blackPlayer;
};
