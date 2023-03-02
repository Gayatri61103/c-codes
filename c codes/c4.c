#include <stdio.h>
int main(){
int a,b,c,d,e,f,t;
printf("enter 6 nos");
scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
t=((a>b)?a:b);
t=((t>c)?t:c);
t=((t>d)?t:d);
t=((t>e)?t:e);
t=((t>f)?t:f);
printf("max 6 nos %d",t);
t=((a>b)?b:a);
t=((t>c)?c:t);
t=((t>d)?d:t);
t=((t>e)?e:t);
t=((t>f)?f:t);
printf("min 6 nos %d",t);
return 0;
}
