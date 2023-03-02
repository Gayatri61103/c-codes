#include <stdio.h>
int main(){
int a,b,c,d,e;
printf("enter 4 nos");
scanf("%d%d%d%d",&a,&b,&c,&d);
e=((a>b)?a:b);
e=((e>c)?e:c);
e=((e>d)?e:d);
printf("max among 4 nos %d",e);
e=((a>b)?b:a);
e=((e>c)?c:e);
e=((e>d)?d:e);
printf("min among 4 nos %d",e);
return 0;
}

