/*
 * chart.c
 *
 *  Created on: 2020��9��21��
 *      Author: hello
 */


#include "chart.h"

static void update_chart(int value)
{
	printf("%s:%d\n", __FUNCTION__, value);
}

void Chart_Init(struct Chart* chart)
{
	Observer_Init(&chart->parant, update_chart);
}
