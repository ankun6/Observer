/*
 * chart.h
 *
 *  Created on: 2020��9��21��
 *      Author: hello
 */

#ifndef CHART_H_
#define CHART_H_

#include "observer.h"

struct Chart
{
	struct Observer parant;
	update_fun_t update;
};

void Chart_Init(struct Chart* chart);

#endif /* CHART_H_ */
