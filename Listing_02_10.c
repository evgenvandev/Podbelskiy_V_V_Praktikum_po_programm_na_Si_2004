/*
	Подбельский В.В. Практикум по программированию на языке Си - 2004
	02_10.c - Стр. 46
*/

/*02_10.c - значения и размеры констант перечисления */
#include <stdio.h>
#include <conio.h>
int main()
{
	enum DAY {SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY};
	printf("SUNDAY=%d\n", SUNDAY);
	printf("MONDAY=%d\n", MONDAY);
	printf("FRIDAY=%d\n", FRIDAY);
	printf("sizeof(enum DAY)=%d\n", sizeof(enum DAY));
	printf("sizeof(MONDAY)=%d\n", sizeof(MONDAY));
	printf("sizeof(FRIDAY)=%d\n", sizeof(FRIDAY));
	getch();
	return 0;
}