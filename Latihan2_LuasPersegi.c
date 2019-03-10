/* PROGRAM Luas_persegi */
/* program untuk menghitung luas persegi */
#include <stdio.h>
int main()
{
	//Deklarasi variabel
	int sisi, luas;
	
	//Masukkan sisi
	printf ("Masukkan sisi: ");
	scanf ("%d", &sisi);
	//Hitung Luas
	luas= sisi*sisi;
	printf ("Luas persegi= %d", luas);
	system("PAUSE");
	return 0;
}
