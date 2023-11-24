#include "bee.hpp"
#include <iostream>
using namespace std;
// bee implementation will go here.

// fly() is overrided from the superclass
void Bee::fly(){
    frame+=1;
    // bool hover;
    int random = 1 + rand() % 100; //random number: 1-100
    if(random<=5){ //5% probability of hovering
        hover=true;
        changeFrame = frame+10; //keeps hovering for the next 10 frames
    }
    if(!hover){
        moverRect.x += 5; //moves only if hover is false
    }
    if(hover){cout<<"uri uri jaye"<<endl;}
    //animation at every frame irrespective of hover variable
    if(srcRect.y == 619){
        srcRect = {234,630,163,162};
    }
    else if(srcRect.y == 630){
        srcRect = {409,650,171,147};
    }
    else{
        srcRect = {63,619,151,166};
    }
    //when frame reaches frame+10, hover=false so the bee starts moving again
    if(frame == changeFrame){
        hover = false;
    }

    //so that the values do not become drastically large, not a necessary condition
    if(frame>1000){
        changeFrame=0,frame=0;
    }

}

bool Bee::delbee(){
    if(moverRect.x>1000){
        return true;
    }
    return false;
}

Bee::Bee(SDL_Rect mover){
    //initializes srcrect to one of the three animated pictures and moverRect to the current x,y values and 50,50 as width and height
    srcRect = {63,619,151,166};
    moverRect = mover;
}

