/*
	Подбельский В.В. Практикум по программированию на языке Си - 2004
	02_12.c - Стр. 48
*/

/*02_12.c - коды и "длины" символьных констант */
#include <stdio.h>
#include <conio.h>
int main()
{
	printf("symbol: %c, sizeof(\'j\')=%d, codes: %u, %o, %x\n", 'j', sizeof('j'), 'j', 'j', 'j');
	printf("symbol: %c, sizeof(L\'j\')=%d, codes: %u, %o, %x\n", L'j', sizeof(L'j'), L'j', L'j', L'j');
	getch();
	return 0;
}