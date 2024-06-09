#pragma once
#include "BaseEntity.hpp"

class Cell : public BaseEntity
{
public:
    Cell(int x, int y, int w, int h, const std::string& texturePath);
    void draw() override;
    void setVisible(bool v) { m_visible = v; }
    bool getVisible() { return m_visible; }
protected:
    bool m_visible;
};
