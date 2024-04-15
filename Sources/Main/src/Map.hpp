#pragma once
#include <array>
#include <memory>
#include "BaseEntity.hpp"
#include "FigureFactory.h"

class BaseCell;

namespace 
{
    const int MAP_SIZE = 8;
}

class Map
{
public:
    std::shared_ptr<BaseEntity>& getEntity(int x, int y);
private:
    std::array<std::array<std::shared_ptr<BaseEntity>, MAP_SIZE>, MAP_SIZE> m_map;
    FigureFactory m_figureFactory;
};