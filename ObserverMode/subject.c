/*
 * subject.c
 *
 *  Created on: 2020��9��21��
 *      Author: hello
 */


#include "subject.h"

static void Add(struct Subject* subject,  struct Observer* observer)
{
	list_add_tail(&observer->node, &subject->list);  // ��ӵ�����β��
}

static void Remove(struct Subject* subject, struct Observer* observer)
{
	list_del(&observer->node);                       // ɾ����Ŀ
}

static void Notify(struct Subject* subject)
{
	struct Observer* iterator = NULL;
	list_for_each_entry(iterator, &subject->list, node)  // �����б�
	{
		iterator->update(subject->value);                // ���ù۲����е�update�������и���
	}
}

void Subject_Init(struct Subject* subject)
{
	// ��ʼ������
	subject->value = 0;

	// ��ʼ����������
	subject->add = Add;
	subject->remove = Remove;
	subject->notify = Notify;

	// ��ʼ������
	INIT_LIST_HEAD(&subject->list);
}
