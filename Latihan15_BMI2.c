#include<stdio.h>
main()
{
	float BB, TB, BMI;
	char Pendaataan;
	
	printf ("PENDATAAN\n");
	
	printf("Masukkan berat badan: ");
	scanf ("%f", &BB);
	printf("Masukkan tinggi badan: ");
	scanf ("%f", &TB);
	
	BMI=BB/((TB*0.01)*(TB*0.01));
	
	printf ("BMI Anda adalah %f\n", BMI);
	if (BMI<18.5){
		printf ("BERAT BADAN KURANG\n");
	}
	
	else if (BMI>=18.5&&BMI<=23.9){
		printf ("BERAT BADAN NORMAL\n");
	}
	
	else if (BMI>=24&&BMI<=26.9){
		printf ("BERAT BADAN LEBIH\n");
	}
	
	else if (BMI>=27){
		printf ("OBESITAS\n");
	}
	
	system ("PAUSE");
	return 0;
}
