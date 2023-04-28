#pragma once
#include "AbstractFactory.h"
#include "CocaColaWater.h"
#include "CocaColaBottle.h"

class CocaColaFactory : AbstractFactory
{
public:
	virtual AbstractWater* CreateWater() = 0;
	virtual AbstractBottle* CreateBottle() = 0;
};

