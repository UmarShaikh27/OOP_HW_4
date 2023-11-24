#pragma once
#include <SDL.h>
#include "drawing.hpp"
#include <string>

class Unit{
public:
    void draw();
    virtual void fly() = 0;
protected:
    SDL_Rect srcRect, moverRect;

};