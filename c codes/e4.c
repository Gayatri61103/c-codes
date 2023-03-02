#include <stdio.h>
int main(){
	int x,y,f,n,a;
	printf("enter 2 numbers");
	scanf("%d%d",&x,&y);
	a=x+1;
	while (a<y)
		{n=2;
		f=0;
        	while (n<=(a/2))
                	{if (a%n==0)
                        	{f=f+1;
                        	break;
                        	}
                	n=n+1;
			}
        	if (f==0)
                	{printf("%d \n",a);
                	}
		a=a+1;
		}
	return 0;
	}
