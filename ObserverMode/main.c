/*
 * main.c
 *
 *  Created on: 2020��9��21��
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

	// ��ʼ����������
	Subject_Init(&subject);

	// ��ʼ���۲���
	Chart_Init(&chart);
	Scale_Init(&scale);
	Sheet_Init(&sheet);

	// ������������ӹ۲��߶���
	subject.add(&subject, &chart.parant);
	subject.add(&subject, &scale.parant);
	subject.add(&subject, &sheet.parant);

	// ģ�����ݸı�
	subject.value = 7281;

	// ֪ͨ���ݸı�
	subject.notify(&subject);

	// �Ƴ��۲���scale
	subject.remove(&subject, &scale.parant);

	// ģ�����ݸı�
	subject.value = 1234;

	// ֪ͨ���ݸı�
	subject.notify(&subject);

	return 0;
}
