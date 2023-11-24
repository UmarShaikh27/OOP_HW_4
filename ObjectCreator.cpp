#include "ObjectCreator.hpp"

Unit* ObjectCreator::getObject(int x,int y){
     int random = rand() % 3; //random number: 0,1 or 2

    //creates an object on the basis of random number and pushes into the list
    if (random == 0) {
        Unit* pigeon = new Pigeon({x,y,50,50});
        birdie = pigeon;
    } 
 
    else if (random == 1) {
        Unit* bee = new Bee({x,y,50,50});
        birdie = bee;
    } 

    else {
        Unit* fly = new Butterfly({x,y,50,50});
        birdie = fly;
    }
    return birdie;
};