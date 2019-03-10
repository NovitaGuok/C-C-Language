#include<stdio.h>

typedef struct {
	char Nama[35];
	int NS;
}Mhs;

main (){
	Mhs a[50];
	int n, i, z;
	
	printf ("Jumlah siswa: ");
	scanf ("%d", &n);
	
	for (i=0; i<n; i++){
		printf ("Nama siswa [%d]: ", i+1); //Catatan dari Koko Joe Phang, a[i].Nama jangan terbalik ya :)
		scanf ("%s", &a[i].Nama);
		printf ("Nilai siswa [%d]: ", i+1);
		scanf ("%d", &a[i].NS);
	}
	
	
	int x = 0;
	
	for (i=0; i<n; i++){
		if (x <= a[i].NS){
			x = a[i].NS;
			z = i;
		}
	}
	
	printf ("Nilai tertinggi diraih oleh %s dengan nilai %d\n", a[z].Nama, a[z].NS);
	
	system ("PAUSE");
	return 0;
}
