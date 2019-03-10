#include<stdio.h>

typedef struct {
	int DD, MM, YY;
} X;

main (){
	X a;
	
	printf ("Masukkan tanggal: ");
	scanf ("%d", &a.DD);
	printf ("Masukkan bulan: ");
	scanf ("%d", &a.MM);
	printf ("Masukkan tahun: ");
	scanf ("%d", &a.YY);
	
	printf ("%d : %d : %d\n", a.DD, a.MM, a.YY);
	
	system ("PAUSE");
	return 0;
}
