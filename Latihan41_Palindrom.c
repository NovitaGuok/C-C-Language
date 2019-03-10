#include<stdio.h>
#include<string.h>
main(){
	char Kata[60];
	int n, i;
	
	printf ("PROGRAM CEK PALINDROM\n---------------------\n");

	
	char x[60];
	do{
		printf ("Masukkan kata: ");
		gets(Kata);
			if(strcmp(Kata,"null")==0){
				break;
			}
			strcpy (x, Kata);
			strrev (x);
				if (strcmp (Kata, x) == 0){
					printf ("PALINDROM\n");
				}
				else {
					printf ("BUKAN PALINDROM\n");
				}
				
	}while (1);


	
	system ("PAUSE");
	return 0; 
}
