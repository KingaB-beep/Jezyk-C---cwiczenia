#include <stdio.h>

int main(void)
{
	int liczba, podwojona, kwadratowa;

	liczba = 10;
	podwojona = liczba * 2;
	kwadratowa = liczba * liczba;
	printf("Podwojona wartosc liczby %d wynosi %d, a kwadrat to %d\n", liczba, podwojona, kwadratowa);
	return 0;
}