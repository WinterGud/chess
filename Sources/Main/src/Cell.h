#pragma once
#include "BaseEntity.hpp"

class Cell : public BaseEntity
{
public:
    Cell(int x, int y, int w, int h, Color color, const std::string& texturePath);
    void setCoord(int x, int y) override;
    void setCoord(Coord coord) override;
protected:
};
