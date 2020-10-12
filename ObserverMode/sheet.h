/*
 * sheet.h
 *
 *  Created on: 2020Äê9ÔÂ21ÈÕ
 *      Author: hello
 */

#ifndef SHEET_H_
#define SHEET_H_

#include "observer.h"

struct Sheet
{
	struct Observer parant;
	update_fun_t update;
};
void Sheet_Init(struct Sheet* sheet);

#endif /* SHEET_H_ */
