#include<stdio.h>

int main()
{
	
	int i=1,j=2,k=0,sum=2,rem;
	while (k<4000000){
		printf("%d ",i);
		printf("%d ",j);
		k=i+j;
		if(k>4000000){
			printf("\n");
			break;}
		printf("%d\n",k);
		
		if((i+j)%2==0){
		sum=sum+i+j;
		}

		i=j;
		j=k;
		
}

	printf("%d\n",sum);
	return 0;
}
