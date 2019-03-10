#include <stdio.h>
typedef struct {
	int HH, MM, SS;
}Time;

int Konversi (int HH, int MM, int SS){
	int Con =  HH*3600 + MM*60 + SS;
	return Con;
}

main (){
	int Konv;
	Time a; 
	printf ("Masukkan jam: ");
	scanf ("%d", &a.HH);
	printf ("Masukkan menit: ");
	scanf ("%d", &a.MM);
	printf ("Masukkan detik: ");
	scanf ("%d", &a.SS);
	
	Konv = Konversi (a.HH, a.MM, a.SS);
	printf ("%d detik", Konv);
	
	system ("PAUSE");
	return 0;
}
