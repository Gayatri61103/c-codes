#include <stdio.h>
void f1(int x,int y,int z,int *max,int *min)
{
	*max=x;
	if(*max<y)
		*max=y;
	if(*max<z)
		*max=z;
	*min=x;
	if(*min>y)
		*min=y;
	if(*min>z)
		*min=z;
}
int main(){
	int a,b,c;
	printf("enter 3 nos");
	scanf("%d%d%d",&a,&b,&c);
	int d,e;
	f1(a,b,c,&d,&e);
	printf("max and min respesctively are ");
	printf ("%d\t%d",d,e);
	return 0;
	}

