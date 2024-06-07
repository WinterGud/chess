#pragma once
#include <vector>
#include <memory>
#include "BaseEntity.hpp"
#include "EntityFactory.h"

class BaseFigure;
class BaseCell;


class Map
{
public:
    Map();
    void update();
    BaseEntity& getFigure(int x, int y);
private:
    std::vector<BaseFigure> m_blackFigures;
    std::vector<BaseFigure> m_whiteFigures;
    std::vector<BaseCell> m_cells;
    

};