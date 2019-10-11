#include<stdio.h>
int main()
{
int a,b,p;
printf("Enter the number for the table:");
scanf("%d",&a);
for(b=0;b<=10;b++)
{

p=b*a;

printf("\t\t%d * %d = %d\n",a,b,p);
}

}

