#pragma once
#include "BaseInputManager.h"

class TextInputManager : BaseInputManager
{
public:
    TextInputManager(Map& map);
    BaseEntity& getFigure() override;
    Coord getMove(BaseFigure& figure) override;
};
