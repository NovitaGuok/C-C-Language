#include<stdio.h>
#include<string.h>
main(){
	char Nama[60];
	int n, i;
	
	printf ("Ketik nama Anda: ");
	gets(Nama);
	
	n = strlen (Nama);
	printf ("Kata tersebut dibalik menjadi: ");
	for (i=n; i>=1; i--){
		printf ("%c", Nama[i-1]);
	}

	
	system ("PAUSE");
	return 0; 
}
