/*
 * Chart.h
 *
 *  Created on: 2020Äê9ÔÂ21ÈÕ
 *      Author: hello
 */

#ifndef CHART_H_
#define CHART_H_

#include "Observer.h"

class Chart: public Observer
{
public:
	Chart();
	virtual ~Chart();
	void update(int value);
};

#endif /* CHART_H_ */
