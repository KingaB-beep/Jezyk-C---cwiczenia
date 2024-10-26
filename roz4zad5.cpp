#include <stdio.h>
int main(void)
{
	float predkosc;
	float rozmiar;

	printf("Podaj predkosc pobierania w megabitach na sekunde\n");
	scanf("%f", &predkosc);
	printf("Podaj rozmiar pliku w megabajtach na sekunde\n");
	scanf("%f", &rozmiar);
	
	printf("Przy %.2f megabitow na sekunde plik o rozmiarze %.2f megabajta zostanie pobrany w %.2f sekundy\n", predkosc, rozmiar, (rozmiar*8)/predkosc);
	
	return 0;
}