#include<stdio.h>

int main()
{

	int n,d,r,count=0;
	for (n=2;count<10001;n++){
		r=0;
		for(d=1;d<=n;d++){
			if(n==d){r=r+1;}
			if (n%d==0 && (n!=d) ){
				r=r+1;
				printf("%d    ",r);
			}
			if (r>2){
				break;
			}
		}
		if(r==2) {
                        count=count+1;
                        printf("%d  ",count);
			printf("%d\n",n);
                        }	
	}
		

	return 0;
}
