/*
 * chart.c
 *
 *  Created on: 2020Äê9ÔÂ21ÈÕ
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
