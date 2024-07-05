#pragma once
#include "BaseFigure.hpp"

class Pawn : public BaseFigure
{
public:
    Pawn(int x, int y, int w, int h, Color color, const std::string& texturePath);
    ~Pawn() override;
    bool move(Coord coord) override;
    void update() override;
    bool attack(BaseFigure& attackedFigure) override;
protected:
    bool m_firsMove = true;
};
