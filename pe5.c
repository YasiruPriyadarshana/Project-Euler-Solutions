#include<stdio.h>

int main()
{
	int i,j,tr=1,r;
	for(i=1;tr!=0;i++){
		tr=0;
		for(j=1;j<=20;j++){
		r=i%j;
		tr=tr+r;		
		}
	}
	printf("%d\n",--i);

	return 0;
}
