#include "Player.h"

#include "Bishop.h"
#include "Constants.hpp"
#include "King.h"
#include "Knight.h"
#include "Pawn.h"
#include "Queen.h"
#include "Rook.h"

Player::Player(int pawnStartX, int pawnStartY, int figureStartX, int figureStartY, Color color)
    : m_color(color)
{
    for (int x = 0, y = 0; x < NUM_OF_COLUMNS * CELL_WIDTH; x += CELL_WIDTH, y += CELL_HEIGHT)
    {
        if (color == WHITE)
        {
            m_figures.push_back(std::make_shared<Pawn>(Pawn(pawnStartX + x, pawnStartY,
                                                            CELL_WIDTH, CELL_HEIGHT,
                                                            m_color, PATH_PAWN_WHITE)));
        }
        else if (color == BLACK)
        {
            m_figures.push_back(std::make_shared<Pawn>(Pawn(pawnStartX + x, pawnStartY,
                                                            CELL_WIDTH, CELL_HEIGHT,
                                                            m_color, PATH_PAWN_BLACK)));
        }
    }

    if (color == WHITE)
    {
        m_figures.push_back(std::make_shared<Rook>(Rook(figureStartX + 7 * CELL_WIDTH, figureStartY,
            CELL_WIDTH, CELL_HEIGHT,
            m_color, PATH_ROOK_WHITE)));
        m_figures.push_back(std::make_shared<Knight>(Knight(figureStartX + 6 * CELL_WIDTH, figureStartY,
            CELL_WIDTH, CELL_HEIGHT,
            m_color, PATH_KNIGHT_WHITE)));
        m_figures.push_back(std::make_shared<Bishop>(Bishop(figureStartX + 5 * CELL_WIDTH, figureStartY,
            CELL_WIDTH, CELL_HEIGHT,
            m_color, PATH_BISHOP_WHITE)));
        m_figures.push_back(std::make_shared<King>(King(figureStartX + 4 * CELL_WIDTH, figureStartY,
            CELL_WIDTH, CELL_HEIGHT,
            m_color, PATH_KING_WHITE)));
        m_figures.push_back(std::make_shared<Queen>(Queen(figureStartX + 3 * CELL_WIDTH, figureStartY,
            CELL_WIDTH, CELL_HEIGHT,
            m_color, PATH_QUEEN_WHITE)));
        m_figures.push_back(std::make_shared<Bishop>(Bishop(figureStartX + 2 * CELL_WIDTH, figureStartY,
            CELL_WIDTH, CELL_HEIGHT,
            m_color, PATH_BISHOP_WHITE)));
        m_figures.push_back(std::make_shared<Knight>(Knight(figureStartX + 1 * CELL_WIDTH, figureStartY,
            CELL_WIDTH, CELL_HEIGHT,
            m_color, PATH_KNIGHT_WHITE)));
        m_figures.push_back(std::make_shared<Rook>(Rook(figureStartX + 0 * CELL_WIDTH, figureStartY,
            CELL_WIDTH, CELL_HEIGHT,
            m_color, PATH_ROOK_WHITE)));
    }
    else if (color == BLACK)
    {
        m_figures.push_back(std::make_shared<Rook>(Rook(figureStartX + 7 * CELL_WIDTH, figureStartY,
            CELL_WIDTH, CELL_HEIGHT,
            m_color, PATH_ROOK_BLACK)));
        m_figures.push_back(std::make_shared<Knight>(Knight(figureStartX + 6 * CELL_WIDTH, figureStartY,
            CELL_WIDTH, CELL_HEIGHT,
            m_color, PATH_KNIGHT_BLACK)));
        m_figures.push_back(std::make_shared<Bishop>(Bishop(figureStartX + 5 * CELL_WIDTH, figureStartY,
            CELL_WIDTH, CELL_HEIGHT,
            m_color, PATH_BISHOP_BLACK)));
        m_figures.push_back(std::make_shared<King>(King(figureStartX + 4 * CELL_WIDTH, figureStartY,
            CELL_WIDTH, CELL_HEIGHT,
            m_color, PATH_KING_BLACK)));
        m_figures.push_back(std::make_shared<Queen>(Queen(figureStartX + 3 * CELL_WIDTH, figureStartY,
            CELL_WIDTH, CELL_HEIGHT,
            m_color, PATH_QUEEN_BLACK)));
        m_figures.push_back(std::make_shared<Bishop>(Bishop(figureStartX + 2 * CELL_WIDTH, figureStartY,
            CELL_WIDTH, CELL_HEIGHT,
            m_color, PATH_BISHOP_BLACK)));
        m_figures.push_back(std::make_shared<Knight>(Knight(figureStartX + 1 * CELL_WIDTH, figureStartY,
            CELL_WIDTH, CELL_HEIGHT,
            m_color, PATH_KNIGHT_BLACK)));
        m_figures.push_back(std::make_shared<Rook>(Rook(figureStartX + 0 * CELL_WIDTH, figureStartY,
            CELL_WIDTH, CELL_HEIGHT,
            m_color, PATH_ROOK_BLACK)));
    }
}

bool Player::isFigurePresent(const Coord& coord)
{
    auto it = m_figures.begin();
    for (; it != m_figures.end(); ++it)
    {
        if ((*it)->getCoord() == coord)
        {
            return true;
        }
    }
    return false;
}

std::shared_ptr<BaseFigure>* Player::getFigure(Coord coord)
{
    auto it = m_figures.begin();
    for (; it != m_figures.end(); ++it)
    {
        if ((*it)->getCoord() == coord)
        {
            return &(*it);
        }
    }
    return nullptr;
}

void Player::draw()
{
    for (const auto& figure : m_figures)
    {
        figure->draw();
    }
}
