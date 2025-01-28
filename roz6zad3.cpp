// rzedy2.c -- zastosowanie zaleznych od siebie petli zagniezdzonych
#include <stdio.h>
int main(void)
{
	const int RZEDY = 6;
	const int ZNAKI = 6;
	int rzad;
	char ch;
	for (rzad = 0; rzad < RZEDY; rzad++)
	{
		for (ch = ('F'); ch >= ('F' - rzad); ch--)
			printf("%c", ch);
		printf("\n");
	}
	return 0;
}