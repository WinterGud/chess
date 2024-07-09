#pragma once
#include "BaseFigure.hpp"

class Rook : public BaseFigure
{
public:
    Rook(int x, int y, int w, int h, Color color, const std::string& texturePath);
    ~Rook() override;
    bool checkMove(Coord coord) override;
    bool attack(const BaseFigure& attackedFigure) override;
};
