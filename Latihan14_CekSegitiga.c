#include<stdio.h>
main()
{
	int A, B, C;
	
	printf ("Panjang sisi A: ");
	scanf ("%d", &A);
	printf ("Panjang sisi B: ");
	scanf ("%d", &B);
	printf ("Panjang sisi C: ");
	scanf ("%d", &C);
	
	if (A==B==C){
		printf ("SEGITIGA SAMA SISI\n");
	}
	
	else if (A==C || A==B){
		printf ("SEGITIGA SAMA KAKI\n");
		}
	
	else if (A!=B || A!=C || B!=C){
		printf ("SEMUA SISI BERBEDA\n");
		}
	
	system ("PAUSE");
	return 0;
	
}
