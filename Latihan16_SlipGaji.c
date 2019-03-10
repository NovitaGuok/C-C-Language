#include<stdio.h>
main()
{
	FILE*Fout;
	Fout=fopen("SlipGaji.txt", "w");
	
	int JK, JL, Gaji, GL=0, GT;
	char Nama [12];
	
	printf ("Nama Anda: ");
	gets (Nama);
	printf ("Jam kerja: ");
	scanf ("%d", &JK);
	
	
	fprintf(Fout,"Nama anda adalah %s\n", Nama);
	
	JL=JK-40;
	if (JK>=40){
		GL=JL*1.5*18000;
		Gaji=40*18000;	
		printf ("Jam lembur Anda adalah %d\n", JL);
		fprintf (Fout, "Jam lembur Anda adalah %d\n", JL);
	}
	
	else if (JK<40){
		Gaji=18000*JK;
		printf ("Jam kerja Anda tidak mencapai 40\n");
		fprintf (Fout, "Jam kerja Anda tidak mencapai 40\n");		
	}

	GT= Gaji+GL;
	printf ("Gaji pokok Anda adalah Rp.%d\n", Gaji);
	printf ("Gaji total Anda adalah Rp.%d\n", GT);
	fprintf (Fout, "Gaji pokok Anda adalah Rp.%d\n", Gaji);
	fprintf (Fout, "Gaji total Anda adalah Rp.%d\n", GT);	
	
	
	close (Fout);
	
	system ("PAUSE");
	return 0;
}
