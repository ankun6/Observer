/*
 * Sheet.cpp
 *
 *  Created on: 2020Äê9ÔÂ21ÈÕ
 *      Author: hello
 */

#include <iostream>
#include "Sheet.h"

Sheet::Sheet()
{
}

Sheet::~Sheet()
{
}

void Sheet::update(int value)
{
	std::cout << __FUNCTION__ << ":" << value << std::endl;
}
