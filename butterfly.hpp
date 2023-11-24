#include "drawing.hpp"
#include "Unit.hpp"

class Butterfly:public Unit{

private:
    int direction = 0; //direction 0 means the butterfly goes downwards , direction == 1 means it goes upwards

public:
    void fly();
    Butterfly(SDL_Rect); //constructor
};
