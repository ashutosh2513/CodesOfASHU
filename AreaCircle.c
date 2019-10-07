#include<stdio.h>
int main()


{

float diameter, perimeter, area;
printf("Enter diameterr:");
scanf("%f", &diameter);
perimeter = 3.14 * diameter;
area = perimeter * diameter / 4.0;
printf("\n\nPerimeter:%.2f \n\nArea:%.2f",perimeter,area);
}

