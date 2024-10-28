
#include <stdio.h>

int main(void)
{
	int dzielna, dzielnik;

	printf("Program obliczajacy reszte z dzielenia.\n");
	printf("Podaj dzielnik (liczba calkowita\n");
	scanf("%d", &dzielnik);
	printf("Podaj dzielna (<= 0, aby zakonczyc) \n");
	scanf("%d", &dzielna);

	while (dzielna > 0) /* poczatek petli while */
	{ /* poczatek bloku */

		printf("%d %% %d wynosi %d\n", dzielna, dzielnik, dzielna % dzielnik);
		printf("Podaj dzielna (<= 0, aby zakonczyc):\n");
		scanf("%d", &dzielna);
	} /* koniec bloku */
	printf("Koniec.\n");
	return 0;
}