#include <stdio.h>
void PanJan(void);
void OstatniWiersz(void);

int main(void)
{
	PanJan();
	PanJan();
	OstatniWiersz();
	return 0;
}

void PanJan(void)
{
	printf("Panie Janie!\n");
}

void OstatniWiersz(void)
{
	printf("Rano wstan!");
}