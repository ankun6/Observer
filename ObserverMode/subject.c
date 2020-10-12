/*
 * subject.c
 *
 *  Created on: 2020年9月21日
 *      Author: hello
 */


#include "subject.h"

static void Add(struct Subject* subject,  struct Observer* observer)
{
	list_add_tail(&observer->node, &subject->list);  // 添加到链表尾部
}

static void Remove(struct Subject* subject, struct Observer* observer)
{
	list_del(&observer->node);                       // 删除条目
}

static void Notify(struct Subject* subject)
{
	struct Observer* iterator = NULL;
	list_for_each_entry(iterator, &subject->list, node)  // 遍历列表
	{
		iterator->update(subject->value);                // 调用观察者中的update函数进行更新
	}
}

void Subject_Init(struct Subject* subject)
{
	// 初始化数据
	subject->value = 0;

	// 初始化操作函数
	subject->add = Add;
	subject->remove = Remove;
	subject->notify = Notify;

	// 初始化链表
	INIT_LIST_HEAD(&subject->list);
}
