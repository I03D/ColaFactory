#pragma once
#include "AbstractWater.h"
#include "AbstractBottle.h"

class AbstractFactory
{
public:
	virtual AbstractWater* Createwater() = 0;
	virtual AbstractBottle* CreateBottle() = 0;
};

