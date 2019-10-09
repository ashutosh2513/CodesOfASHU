#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter a number a:");
scanf("%d",&a);
printf("Enter a number b:");
scanf("%d",&b);
c=a;
a=b;
b=c;
printf("After swaping:\n a:%d\n b:%d\n",a,b);


}

