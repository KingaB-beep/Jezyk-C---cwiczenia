#include <stdio.h>


int main()
{
	int litry;
	double masawody;

	
	masawody = 3.0e-23;

	printf("Podaj ilosc wody w litrach\n");
	scanf("%d", &litry);
	printf("W %d litrach wody jest %E czastek wody", litry, litry * 1000 / masawody);
	return 0;
}