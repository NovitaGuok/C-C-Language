#include <stdio.h>
#include <math.h>

void TampilkanPilihan (){
	printf ("Pilihan: \n");
	printf ("1. Lingkaran\n");
	printf ("2. Persegi\n");
	printf ("3. Segitiga\n");
}

void PilihanLingkaran (){
	printf ("\nPilihan: \n");
	printf ("1. Keliling Lingkaran\n");
	printf ("2. Luas Lingkaran\n");
}

float KelilingLingkaran (float r){
	float phi =3.14;
	float KL=phi*2*r;
	return KL;
}

float LuasLingkaran (float r){
	float phi=3.14;
	float LL=phi*pow (r, 2);
	return LL;
}

void PilihanPersegi (){
	printf ("\nPilihan: \n");
	printf ("1. Keliling Persegi\n");
	printf ("2. Luas Persegi\n");
}

float KelilingPersegi (float sisi){
	float KP=4*sisi;
	return KP;
}

float LuasPersegi (float sisi){
	float LP=pow (sisi,2);
	return LP;
}

void PilihanSegitiga (){
	printf ("\nPilihan: \n");
	printf ("1. Keliling Segitiga\n");
	printf ("2. Luas Segitiga\n");
}

float KelilingSegitiga (float alas, float tinggi, float miring){
	float KS=alas+tinggi+miring;
	return KS;
}

float LuasSegitiga (float alas, float tinggi){
	float LS=alas*tinggi/2;
	return LS;
}

main() {
	int Pilihan, r, sisi, alas, tinggi, miring;
	TampilkanPilihan();
	printf ("Pilihan: ");
	scanf ("%d", &Pilihan);
	if (Pilihan==1){
		PilihanLingkaran ();
		printf ("Pilihan: ");
		scanf ("%d", &Pilihan);
		if (Pilihan==1){
			printf ("\nMasukkan jari-jari: ");
			scanf ("%d", &r);
			int Keliling=KelilingLingkaran (r);
			printf ("Keliling = %d\n", Keliling);
		}
		
		else {
			printf ("\nMasukkan jari-jari: ");
			scanf ("%d", &r);
			int Luas=LuasLingkaran (r);
			printf ("Luas = %d\n", Luas);
		}
	}
	
	else if(Pilihan==2){
		PilihanPersegi ();
		printf ("Pilihan: ");
		scanf ("%d", &Pilihan);
		if (Pilihan==1){
			printf ("\nMasukkan sisi: ");
			scanf ("%d", &sisi);
			int Keliling=KelilingPersegi (sisi);
			printf ("Keliling = %d\n", Keliling);
		}
		
		else {
			printf ("\nMasukkan sisi: ");
			scanf ("%d", &sisi);
			int Luas=LuasPersegi (sisi);
			printf ("Luas = %d\n", Luas);
		}
	}
	
	else {
		PilihanSegitiga ();
		printf ("Pilihan: ");
		scanf ("%d", &Pilihan);
		if (Pilihan==1){
			printf ("\nMasukkan alas: ");
			scanf ("%d", &alas);
			printf ("Masukkan tinggi: ");
			scanf ("%d", &tinggi);
			printf ("Masukkan miring: ");
			scanf ("%d", &miring);
			int Keliling=KelilingSegitiga (alas, tinggi, miring);
			printf ("Keliling = %d\n", Keliling);
		}
		
		else {
			printf ("\nMasukkan alas: ");
			scanf ("%d", &alas);
			printf ("Masukkan tinggi: ");
			scanf ("%d", &tinggi);
			int Luas=LuasSegitiga (alas, tinggi);
			printf ("Luas = %d\n", Luas);
		}
	}
	
	system ("PAUSE");
	return 0;
}
