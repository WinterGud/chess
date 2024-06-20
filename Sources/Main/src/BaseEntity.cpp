#include <BaseEntity.hpp>
#include <iostream>
#include "Logger.h"
#include "SDL.h"
#include "SDL_image.h"

BaseEntity::BaseEntity(int x, int y, int w, int h, const std::string& texturePath)
    : m_entityRect(x, y, w, h)
    , m_texture(IMG_LoadTexture(renderer, texturePath.c_str()))
{
    if (m_texture == nullptr)
    {
        Logger::getInstance(LOGGER_OUT_PATH).log(WARNING, std::string("Unable to load texture! SDL_Error: ") + SDL_GetError() + '\n');
    }
}

BaseEntity::~BaseEntity()
{
    
}

void BaseEntity::draw()
{
    SDL_RenderCopy(renderer, m_texture, nullptr, &m_entityRect);
}

void BaseEntity::setCoord(Coord coord)
{
    m_entityRect.x = coord.m_x; m_entityRect.y = coord.m_y;
}

void BaseEntity::setCoord(int x, int y)
{
    m_entityRect.x = x; m_entityRect.y = y;
}

const Coord BaseEntity::getCoord()
{
    return Coord(m_entityRect.x, m_entityRect.y);
}
