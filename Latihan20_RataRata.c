#include<stdio.h>
main()
{
	int NS, JN, n=0, rata;
	
	printf ("Masukkan nilai siswa dan ketik '-1' untuk menghitung rata-rata nilai.\n");
	while (NS>-1){
		printf ("Masukkan nilai siswa: ");
		scanf ("%i", &NS);
		
		JN=NS+JN;
		n=n+1;  
	}
	
	rata=(JN+1)/(n-1);
	
	printf ("Nilai rata-rata Anda adalah %d\n", rata);
	system ("PAUSE");
	return 0;
} 
