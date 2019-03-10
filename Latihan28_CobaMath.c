#include<math.h>
main (){
//1
	int i, akar;
	
	printf ("Masukkan bilangan yang akan dicari nilai akar pangkat dua: ");
	scanf ("%d", &akar);
	i=sqrt (akar);
	printf ("Akar dari bilangan tersebut adalah %d\n\n", i);
	
//2
	int j, mutlak ;
	
	printf ("Masukkan bilangan bulat yang ingin dicari nilai absolut: ");
	scanf ("%d", &mutlak);
	j=abs (mutlak);
	printf ("Nilai absolut dari bilangan tersebut adalah %d\n\n", j);

//3
	int n, x, y;
	
	printf ("Masukkan 2 bilangan yang ingin dicari nilai maksimum: \n");
	printf ("1: ");
	scanf ("%d", &x);
	printf ("2: ");
	scanf ("%d", &y);
	n=fmax (x,y);
	printf ("Nilai maksimum antara 2 bilangan tersebut adalah %d\n\n", n);
	system ("PAUSE");
	return 0;
}
