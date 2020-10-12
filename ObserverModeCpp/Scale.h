/*
 * Scale.h
 *
 *  Created on: 2020Äê9ÔÂ21ÈÕ
 *      Author: hello
 */

#ifndef SCALE_H_
#define SCALE_H_

#include "Observer.h"

class Scale: public Observer
{
public:
	Scale();
	virtual ~Scale();
	void update(int value);
};

#endif /* SCALE_H_ */
