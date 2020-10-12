/*
 * main.c
 *
 *  Created on: 2020��9��21��
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

	// ��ӹ۲��߶���
	subject.add(&chart);
	subject.add(&sheet);
	subject.add(&scale);

	// ģ�����ݸı�
	subject.setValue(31223);

	// ֪ͨ�۲�����
	subject.notify();

	// �Ƴ��۲���sheet
	subject.remove(&sheet);

	// ģ�����ݸı�
	subject.setValue(77345);

	// ֪ͨ�۲�����
	subject.notify();

	return 0;
}
