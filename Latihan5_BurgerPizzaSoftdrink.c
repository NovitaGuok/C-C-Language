#include <stdio.h>
int main()
{
	int B, P, S,Total;
	printf("Burger: ");
	scanf("%d", &B);
	printf("Pizza: ");
	scanf("%d", &P);
	printf("Soft Drink: ");
	scanf("%d", &S);
	Total=B*5000+P*4500+S*2500;
	printf("Total: Rp.%d\n", Total);
	system ("PAUSE");
	return 0;
	
	
}
