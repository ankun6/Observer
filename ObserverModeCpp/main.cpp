/*
 * main.c
 *
 *  Created on: 2020年9月21日
 *      Author: hello
 */
#include <iostream>
#include "Subject.h"
#include "Chart.h"
#include "Sheet.h"
#include "Scale.h"

using namespace std;

int main()
{
	Subject subject;
	Chart chart;
	Sheet sheet;
	Scale scale;

	// 添加观察者对象
	subject.add(&chart);
	subject.add(&sheet);
	subject.add(&scale);

	// 模拟数据改变
	subject.setValue(31223);

	// 通知观察者们
	subject.notify();

	// 移除观察者sheet
	subject.remove(&sheet);

	// 模拟数据改变
	subject.setValue(77345);

	// 通知观察者们
	subject.notify();

	return 0;
}
