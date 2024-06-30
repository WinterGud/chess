#pragma once
#include "BaseEntity.hpp"

class Cell : public BaseEntity
{
public:
    Cell(int x, int y, int w, int h, const std::string& texturePath);
    void draw() override;
    void setVisible(bool v) { m_highlight = v; }
    bool getVisible() { return m_highlight; }
protected:
    bool m_highlight;
};
