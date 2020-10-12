/*
 * observer.c
 *
 *  Created on: 2020Äê9ÔÂ21ÈÕ
 *      Author: hello
 */


#include "observer.h"

void Observer_Init(struct Observer* observer, update_fun_t update)
{
	observer->node.next = NULL;
	observer->node.prev = NULL;
	observer->update = update;
}
