/*
 * Observer.h
 *
 *  Created on: 2020��9��21��
 *      Author: hello
 */

#ifndef OBSERVER_H_
#define OBSERVER_H_

class Observer
{
public:
	Observer();
	virtual ~Observer();
	virtual void update(int value);
};

#endif /* OBSERVER_H_ */
