#include <stdio.h>

int main()
{
	float wiek;
	double sekundy;

	sekundy = 3.156e7;

	printf("Podaj swoj wiek\n");
	scanf("%f", &wiek);
	printf("Twoj wiek w sekundach to %f", wiek * sekundy);
	return 0;
}