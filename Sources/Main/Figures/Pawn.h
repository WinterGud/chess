#pragma once
#include "BaseFigure.hpp"

class Pawn : public BaseFigure
{
public:
    Pawn(int x, int y, color color);
    bool move(int x, int y) override;
    void draw() override { std::cout << "im Pawn\n"; }
    
    bool attack(int x, int y, BaseFigure& attackedFigure) override;
protected:
    bool m_firsMove = true;
};
