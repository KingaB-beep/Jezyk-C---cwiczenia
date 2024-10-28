
#include <stdio.h>
int main(void) 
{
	int licznik, kwadrat; /* instrukcja deklaracji */
	licznik = 0; /* instrukcja przypisania */
	kwadrat = 0; /* jak wyzej */
	int x;
	printf("Podaj zakres przeprowadzanych obliczen\n");
	scanf("%d", &x);

	while (licznik++ < x) /* instrukcja */
		kwadrat = kwadrat + licznik*licznik; /* while */
	printf("suma kwadratow = %d\n", kwadrat); /* instrukcja wywolania funkcji */
	return 0; /* instrukcja zwrotu */
}