#include <stdio.h>
int main(){
	int a,b,c,min;
	printf("enter values for a,b,c");
	scanf("%d%d%d",&a,&b,&c);
	int *d;
	d=&a;
	int *e;
	e=&b;
	int *f;
	f=&c;
	min=*d;
	if (min>*e)
		min=*e;
	if (min>*f)
		min=*f;
	printf("minimum is:%d",min);
	return 0;
	}
