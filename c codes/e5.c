#include <stdio.h>
int main(){
	int a,f,n;
	n=2;
	f=0;
	printf("enter a no");
	scanf("%d",&a);
	while (n<=(a/2))
		{if (a%n==0)
			{f=f+1;
			break;
			}
		n=n+1;
		}
	if (f==1)
		{printf("not a prime no");
		}
	else
		{printf("prime no");
		}
	return 0;
	}
