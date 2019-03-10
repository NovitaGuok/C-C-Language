#include<stdio.h>
/*
progam untuk mencari bilangan ganjil terbesar
dengan input dalam array 2 dimensi
*/

int main()
{
    int a[100][100],b,k,p1,p2,temp;
    printf("masukkan berapa baris yang ingin di buat : ");scanf("%d",&b);
    printf("masukkan berapa kolom yang ingin di buat : ");scanf("%d",&k);
    printf("\n\n");

    for(p1=0;p1<b;p1++)
    {
        for(p2=0;p2<k;p2++)
        {
            printf("masukkan bilangan baris ke %d kolom ke %d : ",p1+1,p2+1);scanf("%d",&a[p1][p2]);
        }
    }
    printf("\n\nini gambar tabelnya\n\n");
    for(p1=0;p1<b;p1++)
    {
        for(p2=0;p2<k;p2++)
        {
            printf("  %d  ",a[p1][p2]);
        }
        printf("\n");
    }
    temp=0;
    for(p1=0;p1<b;p1++)
    {
        for(p2=0;p2<k;p2++)
        {
            if(temp<=a[p1][p2]&&a[p1][p2]%2==1)
            {
                temp=a[p1][p2];
            }
        }
    }
    printf("\n\njdi nilai ganjil terbesarnya adalah %d\n\n",temp);
    return 0;
}
