#pragma once
#include "AbstractFactory.h"
#include "AbstractWater.h"
#include "AbstractBottle.h"

class Client
{
private:
	AbstractWater* water = 0;
	AbstractBottle* bottle = 0;

public:
	Client(AbstractFactory* factory) {

	}
};
