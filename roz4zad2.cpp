#include <stdio.h>
int main(void)
{
	char IMIE[20];
	printf("Jak masz na imie?\n");
	scanf("%s", IMIE);
	
	printf("\"%s\"\n", IMIE);
	printf("\"%20s\"\n", IMIE);
	printf("\"%-20s\"\n", IMIE);
	printf("\"   %s\"\n", IMIE);
	return 0;
}