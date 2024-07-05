#pragma once

#include <memory>
#include <vector>
#include "Constants.hpp"

struct Coord;
class BaseEntity;
class Cell;
class Backlight;
class Player;

class Map
{
public:
    Map();
    auto getEntity(Coord coord, Color color) const -> BaseEntity&;
    void draw() const;
    void highlightBacklight(const std::vector<int>& backlights);
    void turnOffBacklight();
    
protected:
    std::vector<std::shared_ptr<Cell>> m_listCells;
    std::vector<std::shared_ptr<Backlight>> m_listBacklight;
    std::shared_ptr<Player> m_whitePlayer;
    std::shared_ptr<Player> m_blackPlayer;
};
