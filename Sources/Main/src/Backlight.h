#pragma once
#include "BaseEntity.hpp"

class Backlight : public BaseEntity
{
public:
    Backlight(int x, int y, int w, int h, Color color, const std::string& texturePath);
    void draw() override;
    void setVisible(bool v) { m_highlight = v; }
    bool getVisible() { return m_highlight; }

protected:
    bool m_highlight;
};
