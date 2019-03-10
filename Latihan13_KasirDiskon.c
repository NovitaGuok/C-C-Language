#include<stdio.h>
main()
{
	int B, P, S, Total, Diskon;
	char Pernyataan, Y, N;
	
	printf ("Berapa burger? ");
	scanf ("%d", &B);
	printf ("Berapa pizza? ");
	scanf ("%d", &P);
	printf ("Berapa soft drink? ");
	scanf ("%d", &S);
	
	Total=B*5000+P*4500+S*2500;
	
	printf("Total: Rp.%d\n-------------------------\n", Total);
	
	printf("Member? (Answer Y/N): ");
	scanf ("%s", &Pernyataan);
	
	Diskon=Total-(Total*0.1);
	
	if (Pernyataan=='Y'){
		printf ("Anda mendapat diskon.\nAnda cukup membayar %d\nTerima Kasih.\n", Diskon);
		}
	
	else {
		if (Pernyataan=='N'){
			printf ("Anda tidak mendapat diskon.\nTerima Kasih.\n");
		}
	}
	
	system ("PAUSE");
	return 0;
	
}
