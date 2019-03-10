#include<stdio.h>
main ()
{
	int Pilihan, IDR, USD; 
	float Hasil;

	printf ("KONVERSI MATA UANG IDR & USD\nKetik 1 atau 2 untuk:\n1. Konversi IDR ke USD\n2. Konversi USD ke IDR\nPilihan: ");
	scanf ("%d", &Pilihan);
	if (Pilihan==1){
		printf ("Masukkan IDR: Rp. ");
		scanf ("%d", &IDR);
		Hasil=IDR/13000;
		printf ("Hasil konversi: $ %-15.3f", Hasil);
	}
	
	else {
		printf ("Masukkan USD: $ ");
		scanf ("%d", &USD);	
		Hasil=USD*13000;	
		printf ("Hasil konversi: Rp. %-15.3f", Hasil);
	}
	
	system ("PAUSE");
	return 0;
}
