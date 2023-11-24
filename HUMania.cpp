#include <iostream>
#include "HUMania.hpp"

void HUMania::drawObjects()
{

    for(Unit* obj: objectList){
        //if the object is a bee and it has moved out of the screen then instead of being drawn and animated it gets deleted
        string name = typeid(*obj).name();
        if(name == "3Bee" && ((Bee*)(obj))->delbee()){ //typeid of bee is 3Bee
            objectList.remove(obj);  
            delete obj;
            cout<<"del bee"<<endl;
        }
        else{
            //draws and animates objects at each frame
            obj->draw();
            obj->fly();
        }
    }


}

// creates new objects 
void HUMania::createObject(int x, int y)
{
    std::cout << "Mouse clicked at: " << x << " -- " << y << std::endl;

    //create a new bird(bee/fly/pigeon) randomly and adds to the object list
    Unit* birdie = creator.getObject(x,y);
    objectList.push_back(birdie);

}

//destructor iterates over the object list to clear all dynamic allocations
HUMania::~HUMania(){
    for(Unit* obj: objectList){
        delete obj;
    }
    objectList.clear();
    std::cout<<"All clear"<<std::endl;
}