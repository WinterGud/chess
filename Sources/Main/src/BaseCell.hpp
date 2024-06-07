#pragma once
#include "BaseEntity.hpp"

class BaseCell : public BaseEntity
{
public:
    BaseCell(int x, int y, color color);
    void update() override;
    void draw() override;
};