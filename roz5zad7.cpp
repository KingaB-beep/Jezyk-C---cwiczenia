
#include <stdio.h>

void szescian(float liczba)
{

	float razy = liczba * liczba * liczba;

	printf("%f", razy);
}


int main(void) 
{
	float liczba;
	printf("Podaj liczbe\n");
	scanf("%f", &liczba);

	szescian(liczba);

	
	return 0; /* instrukcja zwrotu */
}