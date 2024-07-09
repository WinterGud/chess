#pragma once
#include "BaseFigure.hpp"

class King : public BaseFigure
{
public:
    King(int x, int y, int w, int h, Color color, const std::string& texturePath);
    ~King() override;
    bool checkMove(Coord coord) override;
    bool attack(const BaseFigure& attackedFigure) override;
};
