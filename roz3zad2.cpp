/*przepelnienie zmiennych*/
#include <stdio.h>

int main()
{
	char znak;
	printf("Wpisz znak jaki chcesz zmienic na kod\n");
	scanf("%c", &znak);
	printf("Kod znaku %c to %d.\n", znak, znak);
	return 0;
}