#include<stdio.h>

int main()
{
	int total,counter;
	counter=0;
	total=0;
	do{
	counter=counter+3;	
	if( (counter%5) !=0){
	if(counter>=1000){break;}
		total=total+counter;
		printf("%d\n",counter);
	}
	}while(counter<1000);
	
	counter=0;
	do{
	counter=counter+5;
	if(counter>=1000){break;}
	total=total+counter;
	printf("%d\n",counter);
}while(counter<1000);
	

	printf("%d",total);

	return 0;
}

