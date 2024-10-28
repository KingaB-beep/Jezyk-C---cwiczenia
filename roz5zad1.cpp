// min_sec.c -- konwertuje minuty na godziny i minuty
#include <stdio.h>
#define MIN_NA_HOUR 60 // minuty w sekundy
int main(void)
{
	int min, hour, left;
	printf("Konwertuje minuty na godziny i minuty!\n");
	printf("Podaj liczbe minut (<=0 to koniec):\n");
	scanf("%d", &min); // wczytaj liczbe minut
	while (min > 0)
	{
		hour = min / MIN_NA_HOUR; // obcina liczbe godzin
		left = min % MIN_NA_HOUR; // pozostala liczba sekund
		printf("%d minut to %d godzin, %d minut.\n", min,
			hour, left);
		printf("Podaj kolejnosc wartosc (<=0 to koniec):\n");
		scanf("%d", &min);
	}
	printf("Koniec!\n");
	return 0;
}