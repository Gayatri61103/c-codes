#include <stdio.h>

int main(){
int h1,h2,m1,m2,d,e;
printf("enter time");
scanf("%d:%d",&h1,&m1);
printf("enter time");
scanf("%d:%d",&h2,&m2);
d=((m1>m2)?(h1-h2):(h1-1)-h2);
e=((m1>m2)?(m1-m2):(m1+60)-m2);
printf("%d:%d",d,e);
return 0;
}
