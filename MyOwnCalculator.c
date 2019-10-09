#include<stdio.h>
int main()
{
char ca;
float a,b;
printf(" _________________\n ");
printf("|_______________|\n");
printf(" | 1 | 2 | 3 |   |\n");
printf(" |___|___|___|   |\n");
printf(" | 4 | 5 | 6 | + |\n");
printf(" |___|___|___|___|\n");
printf(" | 7 | 8 | 9 | - |\n");
printf(" |___|___|___|___|\n");
printf(" |    0      | * |\n");
printf(" |___________|___|\n");

printf("\n\n\t\tWhat do u want to do: +, -, /, * :");
scanf("%c",&ca);

printf("\tEnter the two numbers:");
scanf("%f%f",&a,&b); 

switch(ca)
{
case '+':
printf(" _________________\n ");
printf("|%.1f+%.1f = %.1f\n",a,b,a+b);
printf(" |_______________|\n");
printf(" | 1 | 2 | 3 |   |\n");
printf(" |___|___|___|   |\n");
printf(" | 4 | 5 | 6 | + |\n");
printf(" |___|___|___|___|\n");
printf(" | 7 | 8 | 9 | - |\n");
printf(" |___|___|___|___|\n");
printf(" |    0      | * |\n");
printf(" |___________|___|\n");
break;
case '-':
printf(" _________________\n ");
printf("|%.1f-%.1f = %.1f\n",a,b,a-b);
printf(" |_______________|\n");
printf(" | 1 | 2 | 3 |   |\n");
printf(" |___|___|___|   |\n");
printf(" | 4 | 5 | 6 | + |\n");
printf(" |___|___|___|___|\n");
printf(" | 7 | 8 | 9 | - |\n");
printf(" |___|___|___|___|\n");
printf(" |    0      | * |\n");
printf(" |___________|___|\n");
break;
case '*':
printf(" _________________\n ");
printf("|%.1f*%.1f = %.1f\n",a,b,a*b);
printf(" |_______________|\n");
printf(" | 1 | 2 | 3 |   |\n");
printf(" |___|___|___|   |\n");
printf(" | 4 | 5 | 6 | + |\n");
printf(" |___|___|___|___|\n");
printf(" | 7 | 8 | 9 | - |\n");
printf(" |___|___|___|___|\n");
printf(" |    0      | * |\n");
printf(" |___________|___|\n");
break;
case '/':
if(b==0)
{
printf("Not possibe");
}
else
{
printf(" _________________\n ");
printf("|%.1f/%.1f = %.2f\n",a,b,a/b);
printf(" |_______________|\n");
printf(" | 1 | 2 | 3 |   |\n");
printf(" |___|___|___|   |\n");
printf(" | 4 | 5 | 6 | + |\n");
printf(" |___|___|___|___|\n");
printf(" | 7 | 8 | 9 | - |\n");
printf(" |___|___|___|___|\n");
printf(" |    0      | * |\n");
printf(" |___________|___|\n");
}
break;
default:
printf("\n\n\t\tplz choose the correct option\n\n");
}
return 0;
}

