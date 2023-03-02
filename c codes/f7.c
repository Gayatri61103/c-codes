#include <stdio.h>
int fact(int no)
{
	int i,f=1;
	for (i=no;i>0;i--)
	{
		f=f*i;
	}
	return f;
}
int main(){
	int number;
	printf("enter a number");
	scanf("%d",&number);
	printf("%d",fact(number));
	return 0;
}
