/*
 * Subject.cpp
 *
 *  Created on: 2020Äê9ÔÂ21ÈÕ
 *      Author: hello
 */

#include "Subject.h"

Subject::Subject()
{
	this->value = 0;
}

Subject::~Subject()
{
}

void Subject::add(Observer* observer)
{
	items.push_back(observer);
}

void Subject::remove(Observer* observer)
{
	items.remove(observer);
}

void Subject::notify(void)
{
	for(std::list<Observer*>::iterator it = items.begin(); it != items.end(); it++)
	{
		(*it)->update(getValue());
	}
}

int Subject::getValue(void)
{
	return this->value;
}

void Subject::setValue(int value)
{
	this->value = value;
}
