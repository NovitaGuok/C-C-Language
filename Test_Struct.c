#include <stdio.h>

struct manusia {  
	char nama[100];  
	int umur;  
};  
  
struct siswa {  
	char kelas[20];  
	int no_absen;  
	struct manusia orang;  
};  
  
int main(void){  
	struct siswa hery = {"XII TKJ 2", 5, {"Hery Vandoro", 21}};  
   
	printf("Nama Siswa : %s\n", hery.orang.nama);
	printf("Umur : %d\n", hery.orang.umur);

	printf("Kelas : %s\n", hery.kelas);
	printf("No Absen : %d\n", hery.no_absen);
   
	getchar();
	return 0;  
}
