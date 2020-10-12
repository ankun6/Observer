/*
 * scale.c
 *
 *  Created on: 2020Äê9ÔÂ21ÈÕ
 *      Author: hello
 */


#include "scale.h"

static void update_scale(int value)
{
	printf("%s:%d\n", __FUNCTION__, value);
}

void Scale_Init(struct Scale* scale)
{
	Observer_Init(&scale->parant, update_scale);
}
