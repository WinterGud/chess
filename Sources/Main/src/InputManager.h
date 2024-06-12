#pragma once
#include <SDL_events.h>

class InputManager
{
public:
    bool getQuit();
    int getMouseX();
    int getMouseY();
    bool getLeftMousePressed();
    bool getLeftMouseUnPressed();
    
protected:
    SDL_Event m_event;

    bool m_quit = false;
    
    int m_mouseX = 0;
    int m_mouseY = 0;

    bool m_leftMousePressed = false;
    bool m_leftMouseUnPressed = false;
};
