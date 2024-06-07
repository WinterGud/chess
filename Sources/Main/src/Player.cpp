#include "Player.h"
#include "Constants.hpp"
#include "Pawn.h"

namespace 
{
    constexpr int NUM_FIGURES = 8;
    const int FIGURE_WIDTH = SCREEN_WIDTH / NUM_FIGURES;
    const int FIGURE_HEIGHT = SCREEN_HEIGHT / NUM_FIGURES;
}

Player::Player(int pawnStartX, int pawnStartY, int figureStartX, int figureStartY, Color color)
    : m_color(color)
{
    int32_t stepPawn = abs(pawnStartY - figureStartY);

    for (int i = 0; i < NUM_FIGURES * stepPawn; i += stepPawn)
    {
        m_figures.push_back(std::make_shared<Pawn>(Pawn(pawnStartX + i, pawnStartY, FIGURE_WIDTH, FIGURE_HEIGHT, m_color, PAWN_WHITE)));
    }
    
}

void Player::draw()
{
    for (int i = 0; i < m_figures.size(); i++)
    {
        m_figures[i]->draw();
    }
}
