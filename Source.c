#include<stdio.h>
#include<stdlib.h>
#include"func.h"
int main(int argc, char *argv[])
{
	int **y, **z, **m;
	y = Create(5, 5, 100);
	printf("Matrix y: \n");
	Print(y, 5, 5);
	z = Create(3, 4, 15);
	printf("Matrix z: \n");
	Print(z, 3, 4);
	m = Create(7, 3, 20);
	printf("Matrix m: \n");
	Print(m, 7, 3);
	system("PAUSE");
	return 0;
}