#pragma once
#include "BaseFigure.hpp"

class Pawn : public BaseEntity
{
public:
    bool move(int x, int y) override;
    bool attack(int x, int y, BaseEntity& attackedFigure) override;
protected:
    bool firsMove = true;
};
