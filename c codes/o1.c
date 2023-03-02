#include <stdio.h>
int main(){
	int row,column,i,j;
	printf("enter rows ");
	scanf("%d",&row);
	printf("enter columns ");
        scanf("%d",&column);
	int a[row][column],b[row][column],c[row][column];
	printf("enter elements for matrix a");
	for (i=0;i<row;i++)
	{
		for (j=0;j<column;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter elements for matrix b");
	for (i=0;i<row;i++)
        {
                for (j=0;j<column;j++)
                {
                        scanf("%d",&b[i][j]);
                }
        }
	printf("a matrix:\n");
	for (i=0;i<row;i++)
        {
                for (j=0;j<column;j++)
                {
                        printf("%d\t",a[i][j]);
                }
                printf("\n");
        }
	printf("b matrix:\n");
	for (i=0;i<row;i++)
        {
                for (j=0;j<column;j++)
                {
                        printf("%d\t",b[i][j]);
                }
                printf("\n");
        }
	printf("sum :\n");
	for (i=0;i<row;i++)
	{
		for (j=0;j<column;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	for (i=0;i<row;i++)
        {
                for (j=0;j<column;j++)
                {
                        printf("%d\t",c[i][j]);
                }
		printf("\n");
        }
	printf("\nsubtraction :\n");
        for (i=0;i<row;i++)
        {
                for (j=0;j<column;j++)
                {
                        c[i][j]=a[i][j]-b[i][j];
                }
        }
	for (i=0;i<row;i++)
        {
                for (j=0;j<column;j++)
                {
                        printf("%d\t",c[i][j]);
                }
                printf("\n");
        }
	printf("\ntranspose :\n");
	printf("transpose of a\n");
	int k[column][row];
	for (i=0;i<column;i++)
        {
                for (j=0;j<row;j++)
                {
                        k[i][j]=a[j][i];
                }
        }
        for (i=0;i<column;i++)
        {
                for (j=0;j<row;j++)
                {
                        printf("%d\t",k[i][j]);
                }
                printf("\n");
        }
	printf("transpose of b\n");
	for (i=0;i<column;i++)
        {
                for (j=0;j<row;j++)
                {
                        k[i][j]=b[j][i];
                }
        }
        for (i=0;i<column;i++)
        {
                for (j=0;j<row;j++)
                {
                        printf("%d\t",k[i][j]);
                }
                printf("\n");
        }
	return 0;
	}
