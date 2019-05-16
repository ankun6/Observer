/*
 * Observer.c
 *
 *  Created on: 2019Äê5ÔÂ15ÈÕ
 *      Author: Administrator
 */


#include "Observer.h"


void update_sheet(int val)
{
	printf("%s: code = %d \r\n", __FUNCTION__, val);
}

void update_chart(int val)
{
	printf("%s: code = %d \r\n", __FUNCTION__, val);
}

void update_scale(int val)
{
	printf("%s: code = %d \r\n", __FUNCTION__, val);
}

void Observer_Init(ObserverPtr op, update_fun_ptr fptr)
{
	op->update = fptr;
	op->node.next = NULL;
	op->node.prev = NULL;
}
