#include<stdio.h>
main(){
	int n, i, j;
	
	printf ("Masukkan nilai n: ");
	scanf ("%d", &n);
	for (i=1; i<=n; i++){
		for (j=1; j<=i; j++){
			printf ("%d ", j);
		}
	printf ("\n");
	}
	

	
	system ("PAUSE");
	return 0;
	
}
