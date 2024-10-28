
#include <stdio.h>
#define D_IN_W 7
int main(void)
{
	int dzien, tydzien, left;
	
	printf("Konwertuje dni na tygodnie i dni!\n");
	printf("Podaj liczbe dni (=0,-20 to koniec):\n");
	scanf("%d", &dzien); 

	while (dzien > 0)
	{
		tydzien = dzien / D_IN_W;
		left = dzien % D_IN_W;


		printf("%d dni to %d tygodni i %d dni\n", dzien, tydzien, left);

		printf("Podaj kolejna wartosc\n");
		scanf("%d", &dzien);
	}
	printf("Koniec!\n");
	return 0;
}