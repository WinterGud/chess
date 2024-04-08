#pragma once

class BaseEntity
{
public:
    BaseEntity(int x, int y);
    virtual ~BaseEntity();
    virtual bool move(int x, int y) = 0;
    virtual bool attack(int x, int y, BaseEntity& attackedFigure) = 0;
    int getX() { return m_x; }
    int getY() { return m_y; }
protected:
    int m_x, m_y;
};
