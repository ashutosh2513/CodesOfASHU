#include<stdio.h>
#include<math.h>
int main()
{ 

float a,b,c,g,h;

printf("Enter any three value:");
scanf("%f%f%f",&a,&b,&c);

g=(a+b+c)/2;

h=sqrt((g)*(g-a)*(g-b)*(g-c));

printf("Perimeter is:%f\n",2*g);
printf("Area of triangle is:%f\n",h);
return 0;
}

