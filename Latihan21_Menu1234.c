#include<stdio.h>
main()
{
	int M;

	printf ("MENU PROGRAM\n1. Menu Satu\n2. Menu Dua\n3. Menu Tiga\n4. Menu Empat\n");
	
	do {
		printf ("Pilihan: ");
		scanf ("%d", &M);
		if (M==1){
			printf ("Anda memilih Menu Satu.\n");
		}
		
		else {
			if (M==2){
				printf ("Anda memilih Menu Dua.\n");
			}
			
			if (M==3){
				printf ("Anda memilih Menu Tiga.\n");
			}
		}
		
		
	}

	while (M!=4);
	printf ("Anda memilih Keluar. Bye...\n");
	
	system ("PAUSE");
	return 0;

	
}
