#include <BaseEntity.hpp>
#include <iostream>

#include "SDL.h"
#include "SDL_image.h"

BaseEntity::BaseEntity(int x, int y, int w, int h, color color, const std::string& texturePath)
    : m_entityRect(x, y, w, h)
    , m_color(color)
    , m_texture(IMG_LoadTexture(renderer, texturePath.c_str()))
{
    if (m_texture == nullptr)
    {
        std::cerr << "Unable to load texture! SDL_Error: " << SDL_GetError() << '\n';
    }
}

BaseEntity::~BaseEntity()
{
    
}

void BaseEntity::draw()
{
}
