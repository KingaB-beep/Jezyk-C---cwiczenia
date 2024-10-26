#include <stdio.h>
int main(void)
{
	float liczba;
	char IMIE[20];
	printf("Podaj swoj wzrost w cm\n");
	scanf("%f", &liczba);
	printf("Podaj swoje imie\n");
	scanf("%s", IMIE);
	printf("%s, masz %0.2f m wzrostu.\n", IMIE, liczba/100);
	
	return 0;
}