#define _CRT_SECURE_NO_WARNINGS

#include "DateTime.h"


int main()
{
	DateTime clock(11,11,2018);
	DateTime another(clock);
	clock.getToday();
	//clock.getYesterday();
	//clock.getTomorrow();
	//clock.getPast(45);
	//clock.getFuture(10);
	another.calcDifference(clock);
	system("pause");
	return 0;
}