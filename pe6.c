#include<stdio.h>

int main()
{
	int i,sumos=0,sum=0,sosum;
	for (i=1;i<=100;i++){
		sumos=sumos+i*i;
		sum=sum+i;
	}
	sosum=sum*sum;
	printf("sum of the squares= %d\n",sumos);
	printf("square of the sums= %d\n",sosum);
	
	printf("difference %d\n",sosum-sumos);

	return 0;
}
