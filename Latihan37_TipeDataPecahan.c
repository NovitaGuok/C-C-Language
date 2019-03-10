#include<stdio.h>
typedef struct {
	int Pembilang1, Penyebut1;
} P1;

typedef struct {
	int Pembilang2, Penyebut2;
} P2;

int Perkalian1 (int Pembilang1, int Pembilang2){
	int Kali1 = Pembilang1*Pembilang2;
	return Kali1;
}

int Perkalian2 (int Penyebut1, int Penyebut2){
	int Kali2 = Penyebut1*Penyebut2;
	return Kali2;
}

main (){
	P1 a;
	P2 c;
	
	printf ("P1:\n");
	printf ("Masukkan pembilang: ");
	scanf ("%d", &a.Pembilang1);
	printf ("Masukkan penyebut: ");
	scanf ("%d", &a.Penyebut1);
	printf ("\nP2:\n");
	printf ("Masukkan pembilang: ");
	scanf ("%d", &c.Pembilang2);
	printf ("Masukkan penyebut: ");
	scanf ("%d", &c.Penyebut2);
	
	int Times1 = Perkalian1 (a.Pembilang1, c.Pembilang2);
	int Times2 = Perkalian2 (a.Penyebut1, c.Penyebut2);
	printf ("\nHasil perkalian dari kedua pecahan tersebut adalah %d/%d", Times1, Times2);
}

