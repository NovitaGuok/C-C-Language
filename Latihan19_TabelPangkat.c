#include<math.h>
main()
{
	
	int i, j, k;
	
	printf ("i\ti^2\ti^3\n--------------------\n");
	for (i=0; i<=100; i++){
		j=pow (i,2);
		k=pow (i,3);
		printf ("%d\t%d\t%d\n", i,j, k);

	}
	
	system ("PAUSE");
	return 0;
}
