// rzedy2.c -- zastosowanie zaleznych od siebie petli zagniezdzonych
#include <stdio.h>
int main(void)
{
	const int RZEDY = 5;
	for (int i = 0; i < RZEDY; i++)
	{
		for (int y = 0; y <= i; y++)
			printf("$");
		printf("\n");
	}
	return 0;
}