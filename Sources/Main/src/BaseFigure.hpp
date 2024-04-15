#pragma once
#include "BaseEntity.hpp"
#include "Constants.hpp"

class BaseFigure : public BaseEntity
{
public:
    BaseFigure(int x, int y, color color);

    color getColor() const { return m_color; }
    virtual bool move(int x, int y) = 0;
    virtual bool attack(int x, int y, BaseFigure& attackedFigure) = 0;
    
protected:
    color m_color;
};
