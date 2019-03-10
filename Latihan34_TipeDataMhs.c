#include<stdio.h>

typedef struct {
	int NIM;
	char Nama [12];
} Mhs;

main (){
	Mhs a;
	
	printf ("Masukkan NIM: ");
	scanf ("%d", &a.NIM);
	printf ("Masukkan nama: ");
	scanf ("%s", &a.Nama);
	
	system ("PAUSE");
	return 0;
}
