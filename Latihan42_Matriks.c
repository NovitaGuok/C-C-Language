#include<stdio.h>
#include<string.h>
main(){
	int i, j, p;
	char A[5][5] =
	{
		{'1', '1', '1', '1', '1'},
		{'2', '2', '2', '2', '2'},
		{'3', '3', '3', '3', '3'},
		{'4', '4', '4', '4', '4'},
		{'5', '5', '5', '5', '5'}
	};
	
	char n[2];
	
	printf (" A  B  C  D  E\n");
	for (i=0; i<5; i++){
		for (j=0; j<5; j++){
			printf ("[%c]", A[i][j]);
		}
		printf ("\n");
	}

	do {
	printf ("\nSeat : ");
	scanf ("%s", &n);
	
	int x = toupper(n[0])-'A';
	int y = n[1]-'1';
	
	if (A[y][x]== 'X'){
		printf ("\nSUDAH TERISI\n1. Keluar\n2. Bukan tempat saya\nPilihan:");
		scanf ("%d", &p);
		if (p==1){
			if (A[y][x] == 'X'){
				A[y][x] = n[1];
			} 
			else {
				printf ("Belum dipilih\n");
			}			
		}
		else {
			continue;		
			}
	}
	else {
		A[y][x] = 'X';
	}
	
	printf ("\n");
	printf (" A  B  C  D  E\n");
	for (i=0; i<5; i++){
		for (j=0; j<5; j++){
			printf ("[%c]", A[i][j]);
		}
		printf ("\n");
	}					
	}
	while (strlen(n)==2);

	system ("PAUSE");
	return 0;
}
