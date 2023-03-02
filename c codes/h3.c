#include <stdio.h>
void f1(int a,int *p)
{
	int a1=a/100;
	int a2=(a%100)/10;
	int a3=a%10;
	*p=(a3*100)+(a2*10)+(a1);
}
int main(){
	int x,y;
	printf("enter a 3 digit no");
	scanf("%d",&x);
	f1(x,&y);
	printf("reversed no is ");
	printf("%d",y);
	return 0;
	}
