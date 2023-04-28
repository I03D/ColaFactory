#pragma once
#include "AbstractWater.h"

class AbstractBottle
{
public:
	virtual void Interact(AbstractWater water) = 0;
};
