// #include "TextInputManager.h"
// #include "Constants.hpp"
//
// TextInputManager::TextInputManager(Map& map)
//     : BaseInputManager(map)
// {
// }
//
// BaseEntity& TextInputManager::getFigure()
// {
//     int x, y;
//     std::cout << "Input coordinates your figure: \n";
//     std::cout << "X: ";
//     std::cin >> x;
//     std::cout << "Y: ";
//     std::cin >> y;
//     return m_map.getFigure(x, y);
// }
//
// Coord TextInputManager::getMove(BaseFigure& figure)
// {
//     int x, y;
//     std::cout << "Input coordinates where u wanna go:\n";
//     std::cout << "Input coordinates your figure: \n";
//     std::cout << "X: ";
//     std::cin >> x;
//     std::cout << "Y: ";
//     std::cin >> y;
//
//     if (x >= MAP_SIZE / 2 || y >= MAP_SIZE / 2 || x < 0 || y < 0)
//     {
//         throw "wrong coor";
//     }
//     else if (figure.checkMove())
//     {
//         
//     }
//     
// }
