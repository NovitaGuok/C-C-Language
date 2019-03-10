#include<stdio.h>
typedef struct {
	int HH, MM, SS;
}Time;

typedef struct {
	int TT, BB, YY;
} Date;

typedef struct {
	Time wkt;
	Date tgl;
	char Nama [20], Jurusan [100];
} TiketKA;

main (){
	TiketKA a;
	
	printf ("Nama: ");
	scanf ("%s", &a.Nama);
	printf ("Jurusan: ");
	scanf ("%s", &a.Jurusan);
	printf ("Tanggal: ");
	scanf ("%d %d %d", &a.tgl.TT, &a.tgl.BB, &a.tgl.YY);
	printf ("Waktu: ");
	scanf ("%d %d %d", &a.wkt.HH, &a.wkt.MM, &a.wkt.SS);
	
	printf ("%s\n%s\n%d : %d : %d\n%d : %d : %d\n", a.Nama, a.Jurusan, a.tgl.TT, a.tgl.BB, a.tgl.YY, a.wkt.HH, a.wkt.MM, a.wkt.SS);
	
	system ("PAUSE");
	return 0;
}
