#include<stdio.h>
main()
{
	int n, i, j;
	
	printf ("Masukkan nilai n: ");
	scanf ("%d", &n);
		for (j=1; j<=n; j++){
			for (i=1; i<=n; i++){ 
				printf ("[]");
			}
			printf ("\n");
		}

	system ("PAUSE");
	return 0; 
}
