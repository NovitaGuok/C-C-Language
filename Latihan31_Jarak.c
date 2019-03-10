#include<stdio.h>
void Judul (){
	printf ("PROGRAM MENGHITUNG JARAK\n----------------------------\n");
}

int X (int rx1, int rx2, int ry1, int ry2){
	int i = pow ((rx2-rx1), 2) + pow ((ry2-ry1), 2);
	int Jarak = sqrt (i);
	return Jarak;
}

main (){
	
	Judul ();
	
	int x1, x2, y1, y2;
	printf ("Masukkan X_1: ");
	scanf ("%d", &x1);
	printf ("Masukkan Y_1: ");
	scanf ("%d", &y1);
	printf ("Masukkan x_2: ");
	scanf ("%d", &x2);
	printf ("Masukkan Y_2: ");
	scanf ("%d", &y2);
	
	int d = X (x1, x2, y1, y2);
	printf ("Maka jarak yang ditempuh adalah %d\n", d);
	
	system ("PAUSE");
	return 0;

}
