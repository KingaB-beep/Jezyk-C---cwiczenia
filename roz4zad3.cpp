#include <stdio.h>
int main(void)
{
	float liczba;
	printf("Podaj liczbe zmiennoprzecinkowa\n");
	scanf("%f", &liczba);
	
	printf("Wpisano liczbe %.1f lub %0.1e.\n", liczba, liczba);
	printf("Wpisano liczbe %+.3f lub %0.3E.\n", liczba, liczba);
	return 0;
}