#include "InputManager.h"

bool InputManager::getQuit()
{
    while (SDL_PollEvent(&m_event) != 0)
    {
        if (m_event.type == SDL_QUIT)
        {
            m_quit = true;
        }
    }

    return m_quit;
}

int InputManager::getMouseX()
{
    SDL_GetMouseState(&m_mouseX, &m_mouseY);
    return m_mouseX;
}

int InputManager::getMouseY()
{
    SDL_GetMouseState(&m_mouseX, &m_mouseY);
    return m_mouseY;
}

bool InputManager::getLeftMousePressed()
{
    while(SDL_PollEvent(&m_event))
    {
        if(m_event.type == SDL_MOUSEBUTTONDOWN)
        {
            if (m_event.button.button == SDL_BUTTON_LEFT)
            {
                m_leftMouseUnPressed = false;
                m_leftMousePressed = true;
            }
        }
    }
    return m_leftMousePressed;
}

bool InputManager::getLeftMouseUnPressed()
{
    while(SDL_PollEvent(&m_event))
    {
        if(m_event.type == SDL_MOUSEBUTTONUP)
        {
            if (m_event.button.button == SDL_BUTTON_LEFT)
            {
                m_leftMouseUnPressed = true;
                m_leftMousePressed = false;
            }
        }
    }
    return m_leftMousePressed;
}

