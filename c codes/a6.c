#include <stdio.h>
int main(){
	int n,i,j,temp;
        printf("value of n");
        scanf("%d",&n);
        int a[n];
        for (i=0;i<n;i++)
        {
        	scanf("%d",&a[i]);
        }
	int *x,*y;
	for (i=0,j=n-1;i<j;i++,j--)
        {
		x=&a[i];
		y=&a[j];
                temp=*x;
                *x=*y;
                *y=temp;
        }
        for (i=0;i<n;i++)
        {
                printf("%d",*x);
        }
        return 0;
        }
