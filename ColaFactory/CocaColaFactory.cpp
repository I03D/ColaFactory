#include "CocaColaFactory.h"
#include "AbstractBottle.h"
#include "CocaColaWater.h"
#include "AbstractWater.h"

AbstractWater* CocaColaFactory::CreateWater() {
	return new CocaColaWater() = 0;
}

AbstractBottle* CocaColaFactory::CreateBottle() {
	return new CocaColaBottle() = 0;
}