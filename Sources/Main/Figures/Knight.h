#pragma once
#include "BaseFigure.hpp"

class Knight : public BaseFigure
{
public:
    Knight(int x, int y, int w, int h, Color color, const std::string& texturePath);
    ~Knight() override;
    bool checkMove(Coord coord) override;
    bool attack(const BaseFigure& attackedFigure) override;
};
