
/* dodaj.c -- piec typow instrukcji */
#include <stdio.h>
int main(void) /* oblicza sume  liczb calkowitych */
{
	int licznik, suma; /* instrukcja deklaracji */
	licznik = 0; /* instrukcja przypisania */
	suma = 0; /* jak wyzej */
	int x;
	printf("Podaj zakres przeprowadzanych obliczen\n");
	scanf("%d", &x);
	while (licznik++ < x) /* instrukcja */
		suma = suma + licznik; /* while */
	printf("suma = %d\n", suma); /* instrukcja wywolania funkcji */
	return 0; /* instrukcja zwrotu */
}