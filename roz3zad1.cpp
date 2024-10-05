/*przepelnienie zmiennych*/
#include <stdio.h>


int main(void)
{
	int calkowita = 2147483647; /*zmienna calkowita*/
	float zmiennop = 3.4E38; /*zmienna zmiennoprzecinkowa*/
	float niedomiar = 0.1234E-10; /*zmiennoprzecinkowa do niedomiaru*/
	printf(" % d % d\n", calkowita, calkowita + 10); /*przepelnienie calkowitej*/
	printf("% e % e\n", zmiennop, zmiennop * 100); /*przepelnienie zmiennoprzecinkowej*/
	printf("% e % e\n", niedomiar, niedomiar - (1 << 31)); /*niedomiar*/
	return 0;
}