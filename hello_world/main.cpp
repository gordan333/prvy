#include <stdio.h>
#define N 5
int nacitaj(int *cislo)
{
	return scanf("%i",cislo);
}

int main()
{
	int a, i;
	printf("hello world\n\n");
	for (i=0;i<N;i++)
	{
		printf("zadajte cislo: ");
		nacitaj(&a);
	}
	return 1;
}