#include <stdio.h>
int main()
{
	int a,b,c,d;
	printf("Masukkan nilai a =  ");
	scanf("%d", &a);
	printf("Masukkan nilai b =  ");
	scanf("%d", &b);
	printf("Masukkan nilai c =  ");
	scanf("%d", &c);
	
	d=a;
	a=b;
	b=c;
	c=d;
	
	printf("Nilai a = %d \n",a);
	printf("Nilai b = %d \n",b);
	printf("Nilai c = %d \n",c);
	
	system("PAUSE");
	return 0;
}

