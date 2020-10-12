/*
 * subject.h
 *
 *  Created on: 2020Äê9ÔÂ21ÈÕ
 *      Author: hello
 */

#ifndef SUBJECT_H_
#define SUBJECT_H_

#include "observer.h"
#include "list.h"

struct Subject
{
	int value;
	struct list_head list;
	void (*add)(struct Subject* subject, struct Observer* observer);
	void (*remove)(struct Subject* subject, struct Observer* observer);
	void (*notify)(struct Subject* subject);
};

void Subject_Init(struct Subject* subject);

#endif /* SUBJECT_H_ */
