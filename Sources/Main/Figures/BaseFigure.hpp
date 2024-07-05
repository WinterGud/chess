#pragma once
#include "BaseEntity.hpp"
#include "Constants.hpp"

class BaseFigure : public BaseEntity
{
public:
    BaseFigure(int x, int y, int w, int h, Color color, const std::string& texturePath);
    virtual bool move(Coord coord) = 0;
    virtual bool attack(BaseFigure& attackedFigure) = 0;
    virtual void update() = 0;
protected:
    bool m_clicked = false;
};
