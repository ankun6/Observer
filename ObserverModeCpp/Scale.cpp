/*
 * Scale.cpp
 *
 *  Created on: 2020��9��21��
 *      Author: hello
 */

#include <iostream>
#include "Scale.h"

Scale::Scale()
{
}

Scale::~Scale()
{
}

void Scale::update(int value)
{
	std::cout << __FUNCTION__ << ":" << value << std::endl;
}
