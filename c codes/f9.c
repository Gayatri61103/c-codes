#include <stdio.h>
float func(int no)
{
	int i,t,fact=1;
	t=(no*2)-1;
	for (i=t;i>0;i--)
	{
		fact=fact*i;
	}
	int a,b,temp,c;
        a=1;
        b=1;
        for (c=1;c<=no-2;c++)
        {
                temp=a+b;
                a=b;
                b=temp;
        }
	printf ("%d/%d ",b,fact);
	float x;
	x=b/fact;
	return x;
}
int main(){
	int j,sum=0;
	for (j=1;j<7;j++)
	{
		sum=sum+func(j);
	}
	printf("=%d",sum);
	return 0;
	}
