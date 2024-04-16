#pragma once
#include <iostream>

#include "Constants.hpp"

class BaseEntity
{
public:
    BaseEntity(int x, int y, color color);
    virtual ~BaseEntity();
    virtual void is() { std::cout << "im BaseEntity\n"; }
    int getX() const { return m_x; }
    int getY() const { return m_y; }
    color getColor() const { return m_color; }
protected:
    int m_x, m_y;
    color m_color;
};
