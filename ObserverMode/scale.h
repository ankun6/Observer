/*
 * scale.h
 *
 *  Created on: 2020Äê9ÔÂ21ÈÕ
 *      Author: hello
 */

#ifndef SCALE_H_
#define SCALE_H_

#include "observer.h"

struct Scale
{
	struct Observer parant;
	update_fun_t update;
};

void Scale_Init(struct Scale* scale);

#endif /* SCALE_H_ */
