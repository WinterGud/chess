#pragma once
#include <memory>
#include <vector>
#include "BaseFigure.hpp"

struct Coord;

class Player
{
public:
    Player(int32_t pawnStartX, int32_t pawnStartY, int32_t figureStartX, int32_t figureStartY, Color color);
    bool figureIsPresent(Coord coord);
    std::shared_ptr<BaseFigure>& getFigure(int x, int y);
    void draw();
private:
    std::vector<std::shared_ptr<BaseFigure>> m_figures;
    Color m_color;
};
