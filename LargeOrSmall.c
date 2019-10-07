#include<stdio.h>
int main()
{
int a,b,c;

printf("Enter three number:");
scanf("%d%d%d",&a,&b,&c);

if(a>b&&a>c)
{
printf("%d is the largest number\n ",a);
}
else if(b>c)
{
printf("%d is the largest number\n ",b);
}
else
{
printf("%d is the largest number\n ",c);
}
if(a<b&&a<c)
{
printf("%d is the smallest number\n ",a);
}
else if(b<c)
{
printf("%d is the smallest number\n ",b);
}
else
{
printf("%d is the smalest number\n ",c);
}

return 0;
}

