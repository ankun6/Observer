#include <stdio.h>
#include "Observer.h"
#include "Subject.h"


int main()
{
	Subject sb;
	SheetObserver sheet;
	ScaleObserver scale;
	ChartObserver chart;

	Subject_Init(&sb);
	Observer_Init(&sheet.obs, update_sheet);
	Observer_Init(&scale.obs, update_scale);
	Observer_Init(&chart.obs, update_chart);

	sb.add(&sb, &sheet.obs);
	sb.add(&sb, &scale.obs);
	sb.add(&sb, &chart.obs);

	sb.changeEvent(&sb, 4);
	sb.notify(&sb);
	printf("\n\n");

	sb.remove(&sb, &scale.obs);
	sb.changeEvent(&sb, 0xFF);
	sb.notify(&sb);

    return 0;
}
