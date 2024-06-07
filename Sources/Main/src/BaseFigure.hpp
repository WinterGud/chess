#pragma once
#include "BaseEntity.hpp"
#include "Constants.hpp"

class BaseFigure : public BaseEntity
{
public:
    BaseFigure(int x, int y, int w, int h, color color, const std::string& texturePath);
    virtual bool move(int x, int y) = 0;
    virtual bool attack(int x, int y, BaseFigure& attackedFigure) = 0;
    virtual void draw() = 0;
    void update() override = 0;
    
};
