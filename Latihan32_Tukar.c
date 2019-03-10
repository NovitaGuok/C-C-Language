#include<stdio.h>
void Tukar (int A, int B){
	int temp = A;
	A = B;
	B = temp;
	printf ("Nilai A adalah %d\nNilai B adalah %d\n", A, B);
}

main (){
	
	int a, b;
	printf ("Masukkan nilai A: ");
	scanf ("%d", &a);
	printf ("Masukkan nilai B: ");
	scanf ("%d", &b);
	
	Tukar (a, b);
		
	system ("PAUSE");
	return 0;
}
