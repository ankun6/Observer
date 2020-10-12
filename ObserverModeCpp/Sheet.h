/*
 * Sheet.h
 *
 *  Created on: 2020Äê9ÔÂ21ÈÕ
 *      Author: hello
 */

#ifndef SHEET_H_
#define SHEET_H_

#include "Observer.h"

class Sheet: public Observer
{
public:
	Sheet();
	virtual ~Sheet();
	void update(int value);
};

#endif /* SHEET_H_ */
