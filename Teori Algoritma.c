#include<stdio.h>
#include<string.h>

int main()
{
	char denah[4][5]={
		{'1','2','3','4','5'},
		{'1','2','3','4','5'},
		{'1','2','3','4','5'},
		{'1','2','3','4','5'}
	};
		
	char parkno[3], choose;
	
	int i, j;
	
	printf("Denah Parkir\t :\n");
	
	for(i = 0; i<4; i++){
		printf(" lt%c", 65+i);
		
		for(j = 0; j < 5; j++){
			printf("[%c]", denah[i][j]);
		}
		
		printf("\n");
	}
	
	while(1){
		
		do{
			printf("\nAnda ingin Parkir dimana\t :");
			gets(parkno);
			fflush(stdin);
		}while(strlen(parkno)!=2);
		
		int baris = toupper(parkno[0]) - 'A';
		int no = parkno[1] - '1';
		
		if(denah[baris][no]=='X'){
			printf("Sudah diisi\n");
		}else{
			denah[baris][no] = 'X';
		}
		
		printf("\nDenah Parkir\t : \n");
		
		for(i=0; i<4; i++){
			printf("%c", 65+i);

			for(j = 0; j<5; j++){
				printf("[%c]", denah[i][j]);
			}

			printf("\n");
		}
		
		
		do{
			printf("\nLanjutkan ? (Y/N)\t :");
			scanf("%c", &choose);
			fflush(stdin);
		}while(toupper(choose) != 'Y' && toupper(choose) != 'N');
		
		if(toupper(choose) == 'N'){
			break;
		}
	}
	system("PAUSE");
	return 0;
}
