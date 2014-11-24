#include <stdio.h>

int nacitaj(int *cislo)
{
	return scanf("%i",cislo);
}

int main()
{
	int a;
	printf("hello world\n");
	nacitaj(&a);
	return 1;
}