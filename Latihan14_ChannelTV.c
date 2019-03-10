#include<stdio.h>
main()
{
	int Channel;
	
	printf ("Channel(1-11): ");
	scanf ("%d", &Channel);
	
	if (Channel==1){
		printf ("TVRI\n");
	}
	
	else if (Channel==2){
		printf ("BatamTV\n");
	}
	
	else if (Channel==3){
		printf ("Indosiar\n");
	}
	
	else if (Channel==4){
		printf ("TransTV\n");
	}
	
	else if (Channel==5){
		printf ("Trans7\n");
	}
	
	else if (Channel==6){
		printf ("MNC\n");
	}
	
	else if (Channel==7){
		printf ("MetroTV\n");
	}
	
	else if (Channel==8){
		printf ("TVOne\n");
	}
	
	else if (Channel==9){
		printf ("RCTI\n");
	}
	
	else if (Channel==10){
		printf ("SCTV");
	}
	
	else if (Channel==11){
		printf ("ANTV\n");
	}	
	
	system ("PAUSE");
	return 0;
}
