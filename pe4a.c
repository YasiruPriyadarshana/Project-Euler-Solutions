#include<stdio.h>

int main()
{
        int x=100,y=100,num,s=0,p1,p2,p3,p4,p5,p6;
        while(x<1000){
                num=x*y;
		y++;
		if(y==1000){
			x++;
			y=100;
			
		}


		p1=num/100000;
                p2=(num%100000)/10000;
                p3=(num%10000)/1000;
                p4=(num%1000)/100;
		p5=(num%100)/10;
		p6=num%10;
        
		if(p1==p6&&p2==p5&&p3==p4){
			printf("%d%d%d%d%d%d\n",p1,p2,p3,p4,p5,p6);
			
			if(s-num<=0){s=0;s=s+num;printf("\t %d\n",s);}
		}
	}
        return 0;
}

