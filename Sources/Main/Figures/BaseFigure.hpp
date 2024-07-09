#pragma once
#include "BaseEntity.hpp"
#include "Constants.hpp"

class BaseFigure : public BaseEntity
{
public:
    BaseFigure(int x, int y, int w, int h, Color color, const std::string& texturePath);
    virtual bool checkMove(Coord coord) = 0;
    virtual bool attack(const BaseFigure& attackedFigure) = 0;
    Coord getCurrentCoord() { return m_currentCoord; }
    void updateCurrentCoord();
protected:
    Coord m_currentCoord;
};
