/*
 * observer.c
 *
 *  Created on: 2020��9��21��
 *      Author: hello
 */


#include "observer.h"

void Observer_Init(struct Observer* observer, update_fun_t update)
{
	observer->node.next = NULL;
	observer->node.prev = NULL;
	observer->update = update;
}
