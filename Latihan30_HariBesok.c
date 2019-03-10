#include<stdio.h>

void Title (){
	printf ("PROGRAM MENAMPILKAN HARI ESOK\n-----------------------------\n*Notes: 1 adalah Hari Senin.\n");
}

int Hari (int NamaHari){
	if (NamaHari==1){
		printf ("Besok adalah hari Selasa.\n");
	}
	else if (NamaHari==2){
		printf ("Besok adalah hari Rabu.\n");
	}
	else if (NamaHari==3){
		printf ("Besok adalah hari Kamis.\n");
	}
	else if (NamaHari==4){
		printf ("Besok adalah hari Jumat.\n");
	}
	else if (NamaHari==5){
		printf ("Besok adalah hari Sabtu.\n");
	}
	else if (NamaHari==6){
		printf ("Besok adalah hari Minggu.\n");
	}
	else if (NamaHari==7){
		printf ("Besok adalah hari Senin.\n");
	}
	else {
		printf ("Maaf, data yang Anda masukkan salah.\n");
	}
}
	
main (){
	int Nama;
	char X;
	Title ();
	do {
		printf ("\nMasukkan hari: ");
		scanf ("%d", &Nama);
		Hari (Nama);
		printf ("Y/N?\nJawaban Anda: ");
		scanf ("%s", &X);
	}
	while (X=='Y' && X!= 'N');

	system ("PAUSE");
	return 0;	
}
	
