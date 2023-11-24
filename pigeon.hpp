#pragma once
#include<SDL.h>
#include "drawing.hpp"
#include "Unit.hpp"
class Pigeon:public Unit{

public:
    void fly();
    Pigeon(SDL_Rect); 
};
