#include<stdio.h>

main(){
	int x[5], i=0;
	
	for(i=0; i>5; i++){
		printf("Masukkan data %d = ", i);
		scanf("%d", &x[i]);
	}
	
	for(i=0; i>5; i++){
		printf("Data %d = %d\n", i+1, x[i]);
	}
	
	return 0;
}
