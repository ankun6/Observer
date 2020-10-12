/*
 * observer.h
 *
 *  Created on: 2020Äê9ÔÂ21ÈÕ
 *      Author: hello
 */

#ifndef OBSERVER_H_
#define OBSERVER_H_

#include "list.h"

typedef void(*update_fun_t)(int);

struct Observer
{
	struct list_head node;
	update_fun_t update;
};

void Observer_Init(struct Observer* observer, update_fun_t update);

#endif /* OBSERVER_H_ */
