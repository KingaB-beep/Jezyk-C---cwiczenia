
#include <stdio.h>

int main(void)
{
	float cm, cale, stopy;
	stopy = 30.48;
	cale = 2.54;

	printf("Konwertuje wzrost w cm na stopy i cale!\n");
	printf("Podaj wzost w cm (<=0 — koniec):\n");
	scanf("%f", &cm);

	while (cm > 0)
	{
		float ilestop,left,ilecal;
		
		ilestop = (int)(cm / stopy);
		left = cm - (stopy * ilestop);
		ilecal = left / cale;
		

		printf("%f cm = %f stop, %f cali\n", cm, ilestop, ilecal);

		printf("Podaj kolejna wartosc\n");
		scanf("%f", &cm);
	}
	printf("Koniec!\n");
	return 0;
}