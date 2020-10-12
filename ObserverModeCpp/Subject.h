/*
 * Subject.h
 *
 *  Created on: 2020Äê9ÔÂ21ÈÕ
 *      Author: hello
 */

#ifndef SUBJECT_H_
#define SUBJECT_H_

#include <list>
#include "Observer.h"

class Subject
{
public:
	Subject();
	virtual ~Subject();

public:
	void add(Observer* observer);
	void remove(Observer* observer);
	void notify(void);
	void setValue(int value);
	int getValue(void);
	void setValue(void);

private:
	int value;
	std::list<Observer*> items;
};

#endif /* SUBJECT_H_ */
