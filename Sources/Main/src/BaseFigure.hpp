#pragma once
#include "BaseEntity.hpp"
#include "Constants.hpp"

class BaseFigure : public BaseEntity
{
public:
    BaseFigure(int x, int y, int w, int h, Color color, const std::string& texturePath);
    virtual bool move(int x, int y) = 0;
    virtual bool attack(int x, int y, BaseFigure& attackedFigure) = 0;
    virtual void update() = 0;
    Color getColor() const { return m_color; }
protected:
    Color m_color;
};
