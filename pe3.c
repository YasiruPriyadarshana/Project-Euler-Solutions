#include<stdio.h>

int main()
{
	long long int num;
	long long int i;
	printf("Enter number\n");
	scanf("%lld",&num);
	printf("%lld\n",num);
	
	for(i=2;i<=num;i++){
		if(num%i==0){
			num=num/i;
			printf("%lld ",i);
		}
	}printf("\n");
	
}
