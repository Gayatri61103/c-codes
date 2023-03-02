#include <stdio.h>
int fibo(int no)
{
	int a,b,temp,c;
	a=1;
	b=1;
	printf("%d\t%d",a,b);
	for (c=1;c<=no-2;c++)
	{
		temp=a+b;
		printf("\t%d",temp);
		a=b;
		b=temp;
	}
	printf("\nthe nth number of fibonacci series is ");
	printf("%d",b);
}
int main(){
        int number;
        printf("enter a number");
        scanf("%d",&number);
        fibo(number);
        return 0;
}
