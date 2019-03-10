#include <stdio.h>
int main()
{
	FILE*Fout;
	int Awal, Akhir, Biaya, Hasil;
	
	Fout=fopen("slip.txt","w");

	printf("Meter awal: ");
	scanf("%d", &Awal);

	printf("Meter akhir: ");
	scanf("%d", &Akhir);

	Hasil=Akhir-Awal;
	Biaya=Hasil*1050;

	printf("Penggunaan listrik Anda bulan ini sebanyak %d kWh\nTagihan listrik Anda Rp %d\n", Hasil, Biaya);

	fprintf (Fout, "Penggunaan listrik Anda bulan ini sebanyak %d kWh\nTagihan listrik Anda Rp %d", Hasil, Biaya); 
	
	close (Fout);
	system("PAUSE");
	return 0;
}
