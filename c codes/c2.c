#include <stdio.h>
int main(){
int a,b,c,d;
printf("enter 3 nos:");
scanf("%d%d%d",&a,&b,&c);
d=((a>b)?a:b);
d=((d>c)?d:c);
printf("max among 3 nos %d",d);
d=((a>b)?b:a);
d=((d>c)?c:d);
printf("min among 3 nos %d",d);
return 0;}

