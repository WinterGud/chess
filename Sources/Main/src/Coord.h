#pragma once
#include <compare>

struct Coord
{
    Coord(int x, int y)
        : m_x(x), m_y(y)
    {
    }
    int m_x;
    int m_y;
    auto operator<=>(const Coord& coord) const = default;
};
