/*
	Подбельский В.В. Практикум по программированию на языке Си - 2004
	02_11.c - Стр. 47
*/

/*02_11.c - оклады Единой тарифной сетки */
#include <stdio.h>
#include <conio.h>
int main()
{
	enum ETC {RANK01=200, RANK02=210, RANK03=233, 
		RANK04=252, RANK05=285, RANK06=322, RANK07=364, 
		RANK08=412, RANK09=466, RANK10=527, RANK11=595, 
		RANK12=673, RANK13=760, RANK14=859, RANK15=972, 
		RANK16=1078, RANK17=1197, RANK18=1329};
	printf("RANK09=%d\n", RANK09);
	printf("RANK16=%d\n", RANK16);
	printf("sizeof(RANK08)=%d\n", sizeof(RANK08));
	printf("sizeof(enum ETC)=%d\n", sizeof(enum ETC));
	getch();
	return 0;
}