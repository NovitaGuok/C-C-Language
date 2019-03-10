#include <stdio.h>
int main()
{
	int Jam, Menit, Detik, Sisajam;

	printf("Masukkan detik: ");
	scanf("%d", &Detik);
	
	Jam=Detik/3600;
	Sisajam=Detik%3600;
	Menit=Sisajam/60;
	Detik=Menit%60;
	
	printf("%d Jam : %d Menit : %d Detik\n", Jam, Menit, Detik);
	system("PAUSE");
	return 0;
}
