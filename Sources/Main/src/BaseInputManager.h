#pragma once
#include "BaseFigure.hpp"
#include "Coord.h"
#include "Map.hpp"

class BaseInputManager
{
public:
    BaseInputManager(Map& map);
    virtual BaseEntity& getFigure() = 0;
    virtual Coord getMove(BaseFigure& figure) = 0;

    Map* m_map;
};