
#include <stdio.h>

void Temperatura(double Fahrenheit)
{
	const double Celsjusz = 5.0 / 9.0 * (Fahrenheit - 32.0);
	const double Kelwin = Celsjusz + 273.16;
	printf("Fahrenheit = %.2lf, Celsjusz = %.2lf, Kelwin = %.2lf\n", Fahrenheit, Celsjusz, Kelwin);
}

int main(void)
{
	double Fahrenheit;
	int wynik;

	printf("Program przeliczajacy temperature.\n");
	printf("Podaj temperature w stopniach Fahrenheita\n");
	wynik = scanf("%lf", &Fahrenheit);
		
	while (wynik == 1)
		{ 
		Temperatura(Fahrenheit);
		printf("Podaj temperature w stopniach Fahrenheita (k):\n");
		scanf("%lf", &Fahrenheit);
		wynik = scanf("%lf", &Fahrenheit);
	} 
	printf("Koniec.\n");
	return 0;
}

