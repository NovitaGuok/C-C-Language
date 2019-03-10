#include<stdio.h>
void TambahDetik (){
	printf ("PROGRAM TAMBAH DETIK\n--------------------\n");
}

int Konversi (int H, int M, int S, int P){
	int TotalDetik = (H*3600) + (M*60) + S + P;
	return TotalDetik;
}

int Jam (int TotalDetik){
	int H = TotalDetik/3600;
	return H;
}

int Menit (int TotalDetik){
	int M = TotalDetik%3600/60;
	return M;
}

int Detik (int TotalDetik){
	int S = (TotalDetik%3600)%60;
	return S;
}

main (){
	
	TambahDetik ();
	
	int Jm, Mnit, Dtik, DT, H, M, S;

	printf ("Masukkan jam: ");
	scanf ("%i", &Jm);
	printf ("Masukkan menit: ");
	scanf ("%i", &Mnit);
	printf ("Masukkan detik: ");
	scanf ("%i", &Dtik);
	printf ("Masukkan detik tambahan: ");
	scanf ("%i", &DT);

	int Converse = Konversi (Jm, Mnit, Dtik, DT);
	H = Jam (Converse);
	M = Menit (Converse);
	S = Detik (Converse);
		printf ("%i : %i : %i\n", H, M, S);
		
	system ("PAUSE");  
	return 0;	
}
