#include <stdio.h>
int main(){
int a,b,d;
printf("enter 1st no:");
scanf("%d",&a);
printf("enter 2nd no");
scanf("%d",&b);
d=((a>b)?b:a);
printf("minimum %d",d);
return 0;
}

