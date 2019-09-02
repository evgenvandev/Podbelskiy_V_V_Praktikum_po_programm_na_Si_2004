/*
	Подбельский В.В. Практикум по программированию на языке Си - 2004
	03_04.c - Стр. 71
*/

/*03_04.c - #define - подстановки строк */
#include <stdio.h>
#include <conio.h>
#define PROVERB "There are really no mistakes \
in life - only lessons."
int main()
{
	puts(PROVERB);
	getch();
	return 0;
}