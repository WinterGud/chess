#pragma once
#include "BaseEntity.hpp"
#include "Constants.hpp"

class BaseFigure : public BaseEntity
{
public:
    BaseFigure(int x, int y, color color);
    virtual bool move(int x, int y) = 0;
    virtual bool attack(int x, int y, BaseFigure& attackedFigure) = 0;
    void draw() override = 0;
    void update() override;

};
