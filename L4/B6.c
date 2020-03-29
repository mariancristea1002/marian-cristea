#include <stdio.h>

#include <stdlib.h>

int *sum(int m, int n)

{

	int *suma;

	suma = (int*)malloc(sizeof(int));

	*suma = m + n;

	return suma;

}

int main()

{

	int m, n, *suma;
	printf("m=");
	scanf("%d", &m);
	printf("n=");
	scanf("%d", &n);
	suma = sum(m, n);
	printf("Valoarea este :%d\n", *suma);
	system("pause");
	return 0;

}