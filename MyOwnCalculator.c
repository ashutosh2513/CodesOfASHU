#include<stdio.h>
int main()
{
char ca;
float a,b;

printf("\n\n\t\tWhat do u want to do: +, -, /, * :");
scanf("%c",&ca);

printf("\tEnter the two numbers:");
scanf("%f%f",&a,&b); 

switch(ca)
{
case '+':
printf("%.1f + %.1f = %.1f\n",a,b,a+b);
break;
case '-':
printf("%.1f - %.1f = %.1f\n",a,b,a-b);
break;
case '*':
printf("%.1f * %.1f = %.1f\n",a,b,a*b);
break;
case '/':
if(b==0)
{
printf("Not possibe");
}
else
{
printf("%.1f / %.1f = %.2f\n",a,b,a/b);
}
break;
default:
printf("\n\n\t\tplz choose the correct option\n\n");
}
return 0;
}

