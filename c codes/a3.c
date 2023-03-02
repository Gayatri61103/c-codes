#include <stdio.h>
int main(){
	int a,b,temp;
	printf ("enter values for a and b");
	scanf("%d%d",&a,&b);
	int *c;
	c=&a;
	int *d;
	d=&b;
	printf("a is:%d\n",*c);
        printf("b is :%d\n",*d);
	temp=*c;
	*c=*d;
	*d=temp;
	printf("new a is:%d\n",*c);
	printf("new b is :%d",*d);
	return 0;
	}
