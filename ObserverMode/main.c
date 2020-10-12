/*
 * main.c
 *
 *  Created on: 2020年9月21日
 *      Author: hello
 */

#include "subject.h"
#include "chart.h"
#include "scale.h"
#include "sheet.h"

int main(void)
{
	struct Subject subject;
	struct Chart chart;
	struct Scale scale;
	struct Sheet sheet;

	// 初始化基础数据
	Subject_Init(&subject);

	// 初始化观察者
	Chart_Init(&chart);
	Scale_Init(&scale);
	Sheet_Init(&sheet);

	// 给基础数据添加观察者对象
	subject.add(&subject, &chart.parant);
	subject.add(&subject, &scale.parant);
	subject.add(&subject, &sheet.parant);

	// 模拟数据改变
	subject.value = 7281;

	// 通知数据改变
	subject.notify(&subject);

	// 移除观察者scale
	subject.remove(&subject, &scale.parant);

	// 模拟数据改变
	subject.value = 1234;

	// 通知数据改变
	subject.notify(&subject);

	return 0;
}
