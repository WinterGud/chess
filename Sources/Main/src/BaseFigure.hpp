#pragma once
#include "BaseEntity.hpp"

class BaseFigure : public BaseEntity
{
public:
    BaseFigure(int x, int y);

    virtual bool move(int x, int y) = 0;
    virtual bool attack(int x, int y, BaseFigure& attackedFigure) = 0;
    
protected:
    enum color
    {
        BLACK,
        WHITE,
    };
    color m_color;
};
