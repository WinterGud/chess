#pragma once
#include "BaseFigure.hpp"

class Queen : public BaseFigure
{
public:
    Queen(int x, int y, int w, int h, Color color, const std::string& texturePath);
    ~Queen() override;
    bool checkMove(Coord coord) override;
    bool attack(const BaseFigure& attackedFigure) override;
};
