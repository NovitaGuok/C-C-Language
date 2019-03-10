#include<stdio.h>
main()
{
	int i;
	for(i=1; i<=150; i++){
		if (i%7==0){
			printf ("BOOM!\n");
		} 
	
	else {
		printf ("%d\n", i);
	}
	}
	
	system ("PAUSE");
	return 0;
}
