#include <stdio.h>
#include <math.h>
int main()
{
	float BB, TB, BMI;
	printf("Berat Badan: ");
	scanf("%f", &BB);
	printf("Tinggi Badan: ");
	scanf("%f", &TB);
	BMI = BB / ((TB/100) * (TB/100));
	printf("BMI: %f\n", BMI);
	system("PAUSE");
	return 0;
	
	
}
