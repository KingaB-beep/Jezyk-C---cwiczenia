#include <stdio.h>


int main()
{
	float centymetry;
	float cale;
	

	printf("Podaj swoj wzrost w centymetrach\n");
	scanf("%f", &centymetry);
	printf("Twoj wzrost %f cm to %f w calach\n", centymetry, centymetry / 2.54);
	printf("Podaj swoj wzrost w calach\n");
	scanf("%f", &cale);
	printf("Twoj wzrost %f w calach to %f w cm\n", cale, cale * 2.54);

	return 0;
}