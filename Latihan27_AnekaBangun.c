#include<stdio.h>
#include<libAnekaBangun.h>

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
			printf ("Masukkan jari-jari: ");
			scanf ("%d", &r);
			int Keliling=KelilingLingkaran (r);
			printf ("%d", Keliling);
		}
		
		else {
			printf ("Masukkan jari-jari: ");
			scanf ("%d", &r);
			int Luas=LuasLingkaran (r);
			printf ("%d", Luas);
		}
	}
	
	else if(Pilihan==2){
		PilihanPersegi ();
		printf ("Pilihan: ");
		scanf ("%d", &Pilihan);
		if (Pilihan==1){
			printf ("Masukkan sisi: ");
			scanf ("%d", &sisi);
			int Keliling=KelilingPersegi (sisi);
			printf ("%d", Keliling);
		}
		
		else {
			printf ("Masukkan sisi: ");
			scanf ("%d", &sisi);
			int Luas=LuasPersegi (sisi);
			printf ("%d", Luas);
		}
	}
	
	else {
		PilihanSegitiga ();
		printf ("Pilihan: ");
		scanf ("%d", &Pilihan);
		if (Pilihan==1){
			printf ("Masukkan alas: ");
			scanf ("%d", &alas);
			printf ("Masukkan tinggi: ");
			scanf ("%d", &tinggi);
			printf ("Masukkan miring: ");
			scanf ("%d", &miring);
			int Keliling=KelilingSegitiga (alas, tinggi, miring);
			printf ("%d", Keliling);
		}
		
		else {
			printf ("Masukkan alas: ");
			scanf ("%d", &alas);
			printf ("Masukkan tinggi: ");
			scanf ("%d", &tinggi);
			int Luas=LuasSegitiga (alas, tinggi);
			printf ("%d", Luas);
		}
	}
	
	system ("PAUSE");
	return 0;
}
