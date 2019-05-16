/*
 * Subject.c
 *
 *  Created on: 2019Äê5ÔÂ15ÈÕ
 *      Author: Administrator
 */


#include "Subject.h"

static void Subject_AddObserver(SubjectPtr sp, ObserverPtr op)
{
	list_add_tail(&op->node, &sp->list);
}

static void Subject_RemoveObserver(SubjectPtr sp, ObserverPtr op)
{
	list_del(&op->node);
}

static void Subject_NotifyObserver(SubjectPtr sp)
{
	ObserverPtr op;
	list_for_each_entry(op, &sp->list, node)
	{
		op->update(sp->val);
	}
}

static void Subject_ChangeEvent(SubjectPtr sp, int code)
{
	sp->val = code;
}

void Subject_Init(SubjectPtr sp)
{
	sp->add = Subject_AddObserver;
	sp->remove = Subject_RemoveObserver;
	sp->notify = Subject_NotifyObserver;
	sp->changeEvent = Subject_ChangeEvent;
	sp->val = 0;
	INIT_LIST_HEAD(&sp->list);
}
