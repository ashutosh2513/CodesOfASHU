#include<stdio.h>
int main()
{
int a,b,c,e,g,h;
printf("Enter a three digit number:");
scanf("%d",&g);
a=g/100;
b=((g%100)/10);
c=((g%100)%10);
e=a+b+c;
h=a*b*c;
printf("sum of individual number is:%d\n",e);
printf("multipling individualy all 3 digit:%d\n",h);



}

