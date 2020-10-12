/*
 * Chart.cpp
 *
 *  Created on: 2020Äê9ÔÂ21ÈÕ
 *      Author: hello
 */

#include <iostream>
#include "Chart.h"

Chart::Chart()
{
}

Chart::~Chart()
{
}

void Chart::update(int value)
{
	std::cout << __FUNCTION__ << ":" << value << std::endl;
}
