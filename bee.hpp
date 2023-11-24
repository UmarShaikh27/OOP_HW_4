#include<SDL.h>
#include "drawing.hpp"
#include "Unit.hpp"
class Bee:public Unit{

private:
    // changeframe stores the value of the frame at which the bee starts moving again after hovering
    int frame = 0,changeFrame=0;
    // if hover is true, bee will only animate and not move
    bool hover;
public:
    void fly();
    Bee(SDL_Rect); 
    //tells whether the bee has moved out of the screen or not
    bool delbee(); 
};
