#include <stdio.h>
#include <string.h> // potrzebujemy funkcji strlen()
int main(void)
{
	char imie[20];
	char nazwisko[30];
	int litery, lit;

	printf("Podaj imie\n");
	scanf("%s", imie);
	
	litery = strlen(imie);
	printf("Podaj nazwisko\n");
	scanf("%s", nazwisko);
	
	lit = strlen(nazwisko);
	printf("%s %s\n", imie, nazwisko);
	printf("%*d %*d\n", litery, litery, lit, lit);
	printf("%-*d %-*d\n", litery, litery, lit, lit);
	return 0;
}