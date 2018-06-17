#include<stdio.h>

int main()
{
	long long int n,d,r,sum=0;
	for (n=1;n<2000000;n++){
		r=0;
		
		for (d=1;d<=n;d++){
			if(n == d){
				r=r+1;
			}
			if ((n%d == 0) && (n != d)){
				r=r+1;
			}
			if (r>2){
				break;
			}
		}
		//	printf("%lld   ",r);
		if (r == 2){
			sum=sum+n;
		}
			printf("%lld\n", n);
	}
			printf("%lld\n", sum);
}
