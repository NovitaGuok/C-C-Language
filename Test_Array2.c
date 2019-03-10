#include <stdio.h>
#define Nmaks 100
int main(){
    int i,n;
    float u,jumlah,A[Nmaks];
    
    printf("Jumlah data: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("A[%d]:",i);
        scanf("%f",&A[i]);
    }
    
    jumlah=0;
    
	for(i=0;i<n;i++){
    	jumlah=jumlah+A[i];
    }
    u=jumlah/n;

    printf("Rata-rata : %f",u);
    return 0;
}

