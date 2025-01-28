
#include <stdio.h>


int main(void)
{
	char literki[26];

	for (int i = 0; i < 26; i++)
	{
		literki[i] = 'a' + i;
	}

	printf("Zawartosc tablicy: \n");
	for (int i = 0; i < 26; i++)
	{
		printf("%c", literki[i]);

	}

	return 0;
}

