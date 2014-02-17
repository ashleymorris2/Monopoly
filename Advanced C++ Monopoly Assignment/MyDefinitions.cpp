#include "stdafx.h"
#include "MyDefinitions.h"

#include <iostream>
using namespace std;

int Random()
{
	return static_cast<int>( static_cast<double> (rand()) / (RAND_MAX + 1) * 6.0f + 1 );
}
