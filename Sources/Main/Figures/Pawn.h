#pragma once
#include "BaseFigure.hpp"

class Pawn : public BaseFigure
{
public:
    Pawn(int x, int y, int w, int h, Color color, const std::string& texturePath);
    ~Pawn() override;
    bool checkMove(Coord coord) override;
    bool attack(const BaseFigure& attackedFigure) override;
protected:
    bool m_firstMove = true;
};
