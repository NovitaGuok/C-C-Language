#include <stdio.h>
main()
{
	int Nilai;
	printf("Masukkan nilai: ");
	scanf("%d", &Nilai);
	if (Nilai>=60){
		printf("LULUS\n");
	}

	else {
		if (Nilai==60){
			printf("LULUS\n");
		}

	else {
		printf("TIDAK LULUS\n");
	}
	system ("PAUSE");
	return 0;
	}
}
