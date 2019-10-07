#include<stdio.h>
int main()
{
int p;
for(p=1;p<=100;p++)

if(p%15==0)
printf("fizzbuzz\n");
else if(p%3==0)
printf("fizz\n");
else if(p%5==0)
printf("buzz\n");
else
printf("%d\n",p);

return 0;


}

