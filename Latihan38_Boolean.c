#include<stdio.h>
main(){
	int i, n, Cari, x, NS[20];
	
	printf ("Jumlah siswa: ");
	scanf ("%d", &n);
	
	for (i=1; i<=n; i++){
		printf ("Nilai siswa [%d] : ", i);
		scanf ("%d", &NS[i]);	
	}
	
	printf("Masukkan data yang ingin dicari: ");
	scanf ("%d", &Cari);
	x = 0;

	for (i=1; i<=n; i++){	
		if(Cari==NS[i]){
			printf ("Nilai tersebut berada di data ke %d\n", i);
			x = 1;
		}
	}
	
	if (x == 0){
		printf ("Data yang Anda cari tidak ditemukan.\n");	
	}
	
	system ("PAUSE");
	return 0;
}
