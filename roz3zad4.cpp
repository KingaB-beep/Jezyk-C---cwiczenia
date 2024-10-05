#include <stdio.h>


int main()
{
	float liczba;

	printf("Podaj liczbe\n");
	scanf("%f", &liczba);
	printf("Podana liczba to %f lub %e lub %a", liczba, liczba, liczba);
	return 0;
}