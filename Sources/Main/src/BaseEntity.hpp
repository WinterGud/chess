#pragma once
#include "Constants.hpp"
#include <string>

class BaseEntity
{
public:
    BaseEntity(int x, int y, int w, int h, Color color, const std::string& texturePath);
    virtual ~BaseEntity();
    
    virtual void draw() = 0;
    virtual void update() = 0;
    
    void setX(int x) { m_entityRect.x = x; }
    void setY(int y) { m_entityRect.y = y; }
    int getX() const { return m_entityRect.x; }
    int getY() const { return m_entityRect.y; }
    int getWidth() const { return m_entityRect.w; }
    int getHeight() const { return m_entityRect.h; }
    Color getColor() const { return m_color; }
protected:
    SDL_Rect m_entityRect;
    Color m_color;
    SDL_Texture* m_texture;
};