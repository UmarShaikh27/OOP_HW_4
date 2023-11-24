#pragma once
#include<SDL.h>
#include "ObjectCreator.hpp"
#include "Unit.hpp"
// #include "pigeon.hpp"
// #include "bee.hpp"
// #include "butterfly.hpp"
#include<vector>
#include<list>
using namespace std;

class HUMania{

    //initialisation of object creator
    ObjectCreator creator;
    //initialization of object list
    list<Unit*> objectList;
public:


    
    void drawObjects(); 
    void createObject(int, int);
    ~HUMania(); //destructor
    
};