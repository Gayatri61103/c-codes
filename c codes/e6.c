#include <stdio.h>
int main(){
	int a,n,digit,t;
	digit=0;
	printf("enter a number");
	scanf("%d",&a);
	n=a;
	while (a>0)
		{a=a/10;
		digit=digit+1;
		}
	printf("%d \n",digit);
	if (digit%2==0)
		{t=((digit/2)-1);
		printf("%d \n",t);
		n=n/(10*t);
		n=n%100;
		}
	else
		{t=(digit/2);
		while (i<=t)
			{k=10*10
		n=n%10;
		}
	printf("%d",n);
	return 0;
	}















