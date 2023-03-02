#include <stdio.h>
int main()
{
int a;
printf("Enter a number: ");
scanf("%d",&a);
int digits=((a>=1000)&&(a<=9999))?4:(((a>=10000)&&(a<=99999))?5:0);
int b=(digits==4)?(((a/10)%100)*((a/10)%100)):((digits==5)?((a/100)%100)*((a/100)%100):0);
int c=((digits==4)?((a/1000)*10)+(a%10):((a/10000)*100)+(a%100));
((b==c)&&(digits!=0)?printf("Good number"):printf("not a good number"));
return 0;
}
