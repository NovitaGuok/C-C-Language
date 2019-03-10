#include <stdio.h>
int main()
{
	int NIM;
	char Nama [12], Kelas [3];
	
	printf("Masukkan nama: ");
	gets(Nama);
	
	printf("Masukkan kelas: ");
	gets(Kelas);
	
	printf("Masukkan NIM: ");
	scanf("%d", &NIM);
	
	printf ("HI, %s !\nYour Student ID is %d\nWelcome to class %s\n", Nama, NIM, Kelas);
	system ("PAUSE");
	return 0;
}
