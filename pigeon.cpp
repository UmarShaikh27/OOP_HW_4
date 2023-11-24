#include "pigeon.hpp"
// pigeon implementation will go here.

//simple fly implementation of pigeon like in homework 3
void Pigeon::fly(){
    // 
    moverRect.x += 5;
     //changing state on the basis of current y-coordinates
    if(srcRect.y == 88){
        srcRect = {0,237,153,84};
    }
    else if(srcRect.y == 237){
        srcRect = {2,361,159,124};
    }
    else{
        srcRect = {7,88,155,103};
    }
    if(moverRect.x > 1000){   //If the pigeon moves out of the range of the screen,it enters from the start
        moverRect.x = -9;
    }
}

Pigeon::Pigeon(SDL_Rect mover){
    //initializes srcrect to one of the three animated pictures and moverRect to the current x,y values and 50,50 as width and height
    srcRect = {7,88,155,103};
    moverRect = mover;
}

