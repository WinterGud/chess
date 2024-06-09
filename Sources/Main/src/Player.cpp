#include "Player.h"
#include "Constants.hpp"
#include "Pawn.h"

Player::Player(int pawnStartX, int pawnStartY, int figureStartX, int figureStartY, Color color)
    : m_color(color)
{
    for (int width = 0, height = 0; width < NUM_OF_COLUMNS * CELL_WIDTH; width += CELL_WIDTH, height += CELL_HEIGHT)
    {
        m_figures.push_back(std::make_shared<Pawn>(Pawn(pawnStartX + width, pawnStartY, CELL_WIDTH, CELL_HEIGHT, m_color, PAWN_WHITE)));
    }
    
}

void Player::draw()
{
    for (const auto figure : m_figures)
    { 
        figure->draw();
    }
}
