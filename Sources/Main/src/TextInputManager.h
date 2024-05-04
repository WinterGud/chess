#pragma once
#include "BaseInputManager.h"

class TextInputManager : BaseInputManager
{
public:
    TextInputManager(const Map& map);
    BaseEntity& getFigure() override;
    Coord getMove(BaseFigure& figure) override;
};
