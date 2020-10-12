/*
 * sheet.c
 *
 *  Created on: 2020��9��21��
 *      Author: hello
 */

#include "sheet.h"

static void update_sheet(int value)
{
	printf("%s:%d\n", __FUNCTION__, value);
}

void Sheet_Init(struct Sheet* sheet)
{
	Observer_Init(&sheet->parant, update_sheet);
}
