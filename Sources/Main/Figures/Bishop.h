#pragma once
#include "BaseFigure.hpp"

class Bishop : public BaseFigure
{
public:
    Bishop(int x, int y, int w, int h, Color color, const std::string& texturePath);
    ~Bishop() override;
    bool checkMove(Coord coord) override;
    bool attack(const BaseFigure& attackedFigure) override;
};
