#pragma once
#include "AbstractBottle.h"
#include <iostream>

using namespace std;

class PepsiBottle : AbstractBottle
{
public:
	void Interact(AbstractWater water) {
		cout << "CocaColaBottle interract with CocaColaWater" << endl;
	}
};

