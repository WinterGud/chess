#pragma once

#include <vector>
#include "Cell.h"
#include "Player.h"

class Map
{
public:
    Map();
    auto getEntity(int x, int y, Color color) const -> BaseEntity&;
    void draw() const;
    
protected:
    std::vector<std::shared_ptr<Cell>> m_listCells;
    std::shared_ptr<Player> m_whitePlayer;
    std::shared_ptr<Player> m_blackPlayer;
};
