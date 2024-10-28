
#include <stdio.h>
#define ILE LICZB 10;
int main(void)
{
	int liczba;
	int wiekszaliczba;
	printf("Podaj liczbe calkowita\n");
	scanf("%d", &liczba);
	wiekszaliczba = liczba + 10;
	while (liczba < wiekszaliczba)
	{
		liczba = liczba + 1;

		printf("%d\n", liczba);
	
	}
	printf("Koniec!\n");
	return 0;
}