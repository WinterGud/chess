#pragma once
#include "BaseFigure.hpp"

class Pawn : public BaseFigure
{
public:
    Pawn(int x, int y, int w, int h, Color color, const std::string& texturePath);
    bool move(int x, int y) override;
    void draw() override;
    void update() override;
    
    bool attack(int x, int y, BaseFigure& attackedFigure) override;
protected:
    bool m_firsMove = true;
};
