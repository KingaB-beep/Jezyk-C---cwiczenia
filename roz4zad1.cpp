#include <stdio.h>
int main(void)
{
	char IMIE[20];
	char NAZWISKO[30];
	printf("Jak masz na imie?\n");
	scanf("%s", IMIE);
	printf("Jak masz na nazwisko?\n");
	scanf("%s", NAZWISKO);
	printf("%s, %s\n", NAZWISKO, IMIE);
	return 0;
}