#include <stdio.h>
void sum(int b[ ],int n)
{
	int i,s=0,t,y;
	for (i=0;i<n;i++)
	{
		s=s+b[i];
	}
	printf("sum is %d",s);
	t=b[0];
	for (i=1;i<n;i++)
	{
		if (b[i]>t)
			t=b[i];
	}
	printf("\nmax is %d",t);
	y=b[0];
        for (i=1;i<n;i++)
        {
                if (b[i]<y)
                        y=b[i];
        }
	printf("\nmin is %d",y);
}
int main(){
	int n,i;
	printf("enter size of array:");
	scanf("%d",&n);
	int a[n];
	printf("enter elements");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sum(a,n);
	return 0;
	}
