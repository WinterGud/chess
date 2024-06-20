#pragma once
#include "Constants.hpp"
#include <string>
#include "Coord.h"


class BaseEntity
{
public:
    BaseEntity(int x, int y, int w, int h, const std::string& texturePath);
    virtual ~BaseEntity();
    
    virtual void draw();
    
    void setCoord(Coord coord);
    void setCoord(int x, int y);
    const Coord getCoord();
    int getY() const { return m_entityRect.y; }
    int getWidth() const { return m_entityRect.w; }
    int getHeight() const { return m_entityRect.h; }
protected:
    SDL_Rect m_entityRect;
    SDL_Texture* m_texture;
};
