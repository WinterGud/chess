#pragma once

class BaseEntity
{
public:
    BaseEntity(int x, int y);
    virtual ~BaseEntity();
    int getX() const { return m_x; }
    int getY() const { return m_y; }
protected:
    int m_x, m_y;
};
