#include<stdio.h>
int main()
{
int a,b,g,c;
printf("Enter any 3 digit number:");
scanf("%d",&a);

g=a/100;
b=((a%100)/10);
c=((a%100)%10);

printf("\n\n\t\tOn Reversing the 3 digit number:%d%d%d\n",c,b,g); 



}

