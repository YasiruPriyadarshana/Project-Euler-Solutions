#include<stdio.h>
#include<math.h>

int main()
{
	int a,b=2,c=997;
	for (a=1;a<b;a++){
		for (b=a+1;b<c;b++){
			for (c=1000-a-b;a+b+c==1000;c--){
				if ((a*a)+(b*b) == (c*c)){
					printf("%d %d %d\n", a, b, c);
					printf("%d\n", a*b*c);
				}
			}
		}
		
	}
	
	return 0;
}
