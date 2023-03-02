#include <stdio.h>
int main(){
	int row,column,i,j;
	printf("values of rows and column");
	scanf("%d%d",&row,&column);
	int a[row][column];
	for (i=0;i<row;i++)
	{
		for (j=0;j<column;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	int *b;
	for (i=0;i<row;i++)
	{
		for (j=0;j<column;j++)
		{
			b=&(a[i][j]);
			printf("%d%d=%d\n",i,j,*b);
		}
	}
	return 0;
	}
