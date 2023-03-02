#include <stdio.h>
int main(){
	int first,a;
	printf("enter 1st day of the month from 1 to 7:");
	scanf("%d",&first);
	printf("sun\tmon\ttue\twed\tthu\tfri\tsat\n");
	switch(first)
		{case 1:printf("1");
			break;
		case 2:printf("\t1");
                        break;
		case 3:printf("\t\t1");
                        break;
		case 4:printf("\t\t\t1");
                        break;
		case 5:printf("\t\t\t\t1");
                        break;
		case 6:printf("\t\t\t\t\t1");
                        break;
		case 7:printf("\t\t\t\t\t\t1");
                        break;
		}
	a=2;
	while (a<=((7-first)+1))
		{printf("%d\t",a);
		a=a+1;
		}
	while(a<31)
		{while (a<(a+7))
			{if (a<=31)
				{printf("%d\t",a);
				a=a+1;
				}
			else
				{printf("\n");
				}}
		printf("\n");
		}
	return 0;
	}
