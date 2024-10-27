#include <stdio.h>
#include <float.h>

int main(void)
{

	double zmienna = 1.0 / 3.0;
	float xd = 1.0 / 3.0;


	printf("%.4f\n", zmienna);
	printf("%.12f\n", zmienna);
	printf("%.16f\n", zmienna);
	printf("%.4f\n", xd);
	printf("%.12f\n", xd);
	printf("%.16f\n", xd);

	printf("%d\n", FLT_DIG);
	printf("%d\n", DBL_DIG);
	return 0;
}