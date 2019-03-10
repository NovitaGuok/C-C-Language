#include<stdio.h>

float Segitiga(int alas, int tinggi){
	int luas = (alas * tinggi)/2;
	return luas;
}

float LuasTotal(int luas, int hasil){
	int luastotal = luas + hasil;
	return luastotal;
}

main(){
	int alas, tinggi, luas, hasil, luastotal;
	scanf("%d", &alas);
	scanf("%d", &tinggi);
	scanf("%d", &hasil);
	luas = Segitiga(alas, tinggi);
	printf("%d", luas);
	luastotal = LuasTotal(luas, hasil);
	printf("%d", luastotal);
	
	return 0;
}
