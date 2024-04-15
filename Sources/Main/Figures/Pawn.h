#pragma once
#include "BaseFigure.hpp"

class Pawn : public BaseFigure
{
public:
    Pawn(int x, int y);
    bool move(int x, int y) override;
    bool attack(int x, int y, BaseFigure& attackedFigure) override;
protected:
    bool m_firsMove = true;
};
