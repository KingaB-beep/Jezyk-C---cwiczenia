#include <stdio.h>
#include <float.h>
#define LITRY 3.785*100;
#define KILOM 1.609*100;

int main(void)
{
	float mile;
	float galony;

	printf("Ile przebyles mil?\n");
	scanf("%f", &mile);
	printf("Ile zuzyles galonow paliwa?\n");
	scanf("%f", &galony);
	printf("Poziom zuzycia mile\\galon: %.1f\n", mile/galony);
	float licznik = galony * LITRY;
	float mianownik = mile * KILOM;
	float eval = licznik / mianownik;
	printf("Poziom zuzycia litry\\100km: %.1f\n", eval);
	return 0;
}
