#include<stdio.h>
#include<string.h>

void Title (){
	printf ("PROGRAM MENAMPILKAN HARI ESOK\n-----------------------------\n");
}

char Hari (char NamaHari [8]){
	if (strcmp (NamaHari, "Senin")==0){
		printf ("Besok adalah hari Selasa.\n");
	}
	else if (strcmp (NamaHari, "Selasa")==0){
		printf ("Besok adalah hari Rabu.\n");
	}
	else if (strcmp (NamaHari, "Rabu")==0){
		printf ("Besok adalah hari Kamis.\n");
	}
	else if (strcmp (NamaHari, "Kamis")==0){
		printf ("Besok adalah hari Jumat.\n");
	}
	else if (strcmp (NamaHari, "Jumat")==0){
		printf ("Besok adalah hari Sabtu.\n");
	}
	else if (strcmp (NamaHari, "Sabtu")==0){
		printf ("Besok adalah hari Minggu.\n");
	}
	else if (strcmp (NamaHari, "Minggu")==0){
		printf ("Besok adalah hari Senin.\n");
	}
	else {
		printf ("Maaf, data yang Anda masukkan salah.\n");
	}
}
	
main (){
	char Nama [8], X;
	Title ();
	do {
		printf ("\nMasukkan hari: ");
		scanf ("%s", &Nama);
		Hari (Nama);
		printf ("Y/N?\nJawaban Anda: ");
		scanf ("%s", &X);
	}
	while (X=='Y' && X!= 'N');

	system ("PAUSE");
	return 0;	
}
	  
