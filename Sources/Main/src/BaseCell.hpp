#pragma once
#include "BaseEntity.hpp"

class BaseCell : BaseEntity
{
public:
    BaseCell(int x, int y, color color);
    void update() override;
    void draw() override;
};