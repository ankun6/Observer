/*
 * Observer.cpp
 *
 *  Created on: 2020Äê9ÔÂ21ÈÕ
 *      Author: hello
 */

#include <iostream>
#include "Observer.h"

Observer::Observer()
{
}

Observer::~Observer()
{
}

void Observer::update(int value)
{
	std::cout << __FUNCTION__ << ":" << value << std::endl;
}
