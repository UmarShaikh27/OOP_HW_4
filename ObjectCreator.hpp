#pragma once
#include "Unit.hpp"
#include "pigeon.hpp"
#include "bee.hpp"
#include "butterfly.hpp"

class ObjectCreator{
public:
    Unit* getObject(int x,int y);
private:
    Unit* birdie;
};