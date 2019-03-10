#include<stdio.h>
main()
{
	int Bilangan;
	
	printf("Masukkan bilangan bulat: ");
	scanf("%d", &Bilangan);
	if (Bilangan==0){
		printf ("NOL\n");
	}
	
	else if (Bilangan%2==0){
			printf ("GENAP\n");
	}
		
	else {
		printf ("GANJIL\n");
	}
	
	system("PAUSE");
	return 0;
}
