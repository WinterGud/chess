#include "TextInputManager.h"

BaseEntity& TextInputManager::getFigure()
{
    int x, y;
    std::cin >> x >> y;
    return m_map->getFigure(x, y);
}
