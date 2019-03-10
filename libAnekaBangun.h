void TampilkanPilihan (){
	printf ("Pilihan: \n");
	printf ("1. Lingkaran\n");
	printf ("2. Persegi\n");
	printf ("3. Segitiga\n");
}

void PilihanLingkaran (){
	printf ("Pilihan: \n");
	printf ("1. Keliling Lingkaran\n");
	printf ("2. Luas Lingkaran\n");
}

float KelilingLingkaran (float r){
	float phi =3.14;
	float KL=phi*2*r;
	return KL;
}

float LuasLingkaran (float r){
	float phi=3.14;
	float LL=phi*pow (r, 2);
	return LL;
}

void PilihanPersegi (){
	printf ("Pilihan: \n");
	printf ("1. Keliling Persegi\n");
	printf ("2. Luas Persegi\n");
}

float KelilingPersegi (float sisi){
	float KP=4*sisi;
	return KP;
}

float LuasPersegi (float sisi){
	float LP=pow (sisi,2);
	return LP;
}

void PilihanSegitiga (){
	printf ("Pilihan: \n");
	printf ("1. Keliling Segitiga\n");
	printf ("2. Luas Segitiga\n");
}

float KelilingSegitiga (float alas, float tinggi, float miring){
	float KS=alas+tinggi+miring;
	return KS;
}

float LuasSegitiga (float alas, float tinggi){
	float LS=alas*tinggi/2;
	return LS;
}
