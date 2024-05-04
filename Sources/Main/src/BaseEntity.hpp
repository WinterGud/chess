#pragma once
#include <iostream>

#include "Constants.hpp"

class BaseEntity
{
public:
    BaseEntity() = default;
    BaseEntity(int x, int y, color color);
    virtual ~BaseEntity();
    virtual void draw();
    virtual void update(){}
    int getX() const { return m_x; }
    int getY() const { return m_y; }
    color getColor() const { return m_color; }
protected:
    int m_x, m_y;
    color m_color;
};
