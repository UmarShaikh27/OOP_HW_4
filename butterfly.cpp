#include "butterfly.hpp"

// fly() is overrided from the superclass
void Butterfly::fly(){

    moverRect.x += 5;     //move right each frame

    //mpves up or down on the basis of direction variable
    if(direction == 0){
        moverRect.y +=5;
    }else{
        moverRect.y -=5;
    }

    //changing state on the basis of current y-coordinates
    if(srcRect.y == 24){
        srcRect = {257,182,192,214};
    }
    else if(srcRect.y == 182){
        srcRect = {248,433,247,178};
    }
    else{
        srcRect = {256,24,174,134};
    }

    //If the Butterfly moves out of the range of the screen,it enters from the start
    if(moverRect.x > 1000){   
        moverRect.x = -9;
    }

    //If the Butterfly hits the top, direction = 0 to start moving it downwards
    if(moverRect.y <= 0){   
        direction=0;
    }
    //If the Butterfly hits the bottom, direction = 1 to start moving it upwards
    else if(moverRect.y>=550){
        direction = 1;
    }
}

Butterfly::Butterfly(SDL_Rect mover){
    //initializes srcrect to one of the three animated pictures and moverRect to the current x,y values and 50,50 as width and height
    srcRect = {256,24,174,134};
    moverRect = mover;
}

