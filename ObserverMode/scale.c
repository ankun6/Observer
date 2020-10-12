/*
 * scale.c
 *
 *  Created on: 2020��9��21��
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
