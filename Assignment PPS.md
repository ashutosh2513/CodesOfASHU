![College  Logo](https://www.gndec.ac.in/logo.png)
# *PPS Assignment*
## ***Submitted By :***
##### ***Name : Ashutosh Sharma***
##### ***Roll no. : 1921015***
##### ***Branch : Information technology (I.T.)***
##### ***Section : I.T. A1***

### ***Submitted To:- Ms. Ranjodh Kaur***

# My C programs

## 1. To convert  Degree To Fahrenheit
```
#include<stdio.h>
int main()
{
float c;
float g;
printf("\n\tEnter the value in fahrenheit:");
scanf("%f",&c);
g=((9*c)/5)+32;
printf("\n\n\t\tIn degree:%.3f\n\n\n\n\n",g);
}
```
**OUTPUT**
```
 
         Enter the value in fahrenheit:23


                In degree:73.400
```
## 2.  WAP which takes 2 integer , operands and one operator from user,  perform the operation and then print the result (+,-,*,/,%)
```

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
```
**OUTPUT**
```
 _________________
 |_______________|
 | 1 | 2 | 3 |   |
 |___|___|___|   |
 | 4 | 5 | 6 | + |
 |___|___|___|___|
 | 7 | 8 | 9 | - |
 |___|___|___|___|
 |    0      | * |
 |___________|___|


                What do u want to do: +, -, /, * :+
        Enter the two numbers:13
25
 _________________
 |13.0+25.0 = 38.0
 |_______________|
 | 1 | 2 | 3 |   |
 |___|___|___|   |
 | 4 | 5 | 6 | + |
 |___|___|___|___|
 | 7 | 8 | 9 | - |
 |___|___|___|___|
 |    0      | * |
 |___________|___|
```
## 3. WAP to find whether the number is +ve or -ve.
```
#include<stdio.h>
int main()
{ 
int a;
printf("Enter any number:");
scanf("%d",&a);
if(a>=0)
printf("%d is positive\n",a);
else
printf("%d is negative\n",a);
}
```
**OUTPUT**
```
Enter any number:5
5 is positive

Enter any number:-9
-9 is negative

```
## 4. WAP to check whether number is even or odd.
```
#include<stdio.h>
int main()
{
int a;
printf("To find whether the number is odd or even\n ");
printf("Enter any number:");
scanf("%d",&a);

if(a%2==0)
printf("%d is even number\n",a);

else
printf("%d is odd number\n",a);

}

```
**OUTPUT**
```
To find whether the number is odd or even
 Enter any number:6
6 is even number
```

## 5. WAP to print the total experience of the employs.
```
#include<stdio.h>
int main()

{
int n ;
float y,sum;

printf("\t\t\tEnter the no of employes: ");
scanf("%d",&n);
for (int i=1 ;i<=n;i++)
{

printf("\n\t\t\tEnter the experience of %d employe:",i);
scanf("%f",&y);
sum += y;
}
printf("\n\t\t\tTotal experience employes:%.2f\n\n",sum);
}

```
**OUTPUT**
```
                 Enter the no of employes: 3

                 Enter the experience of 1 employe:18.5

                 Enter the experience of 2 employe:12.9

                 Enter the experience of 3 employe:5.4
                        
                 Total experience employes:36.80

```

## 6. WAP to display the table of user choice.
```
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

```
**OUTPUT**
```
Enter the number for the table:23
                23 * 0 = 0
                23 * 1 = 23
                23 * 2 = 46
                23 * 3 = 69
                23 * 4 = 92
                23 * 5 = 115
                23 * 6 = 138
                23 * 7 = 161
                23 * 8 = 184
                23 * 9 = 207
                23 * 10 = 230

```

## 7.WAP to display the table between the range.
```
#include<stdio.h>
int main()
{
int a,b,c,d,e,f;
printf("enter the range\n");
printf("from:");
scanf("%d",&a);
printf("to:");
scanf("%d",&b);

printf("table from %d to %d are:-\n",a,b);

for(c=a;c<=b;c++)
   { 
     for(d=1;d<=10;d++)
     {
      e=d*c;
      printf("%d*%d=%d\n",c,d,e);
     }
   }
}

```
**OUTPUT**
```
enter the range
from:12
to:15
table from 12 to 15 are:-
12*1=12
12*2=24
12*3=36
12*4=48
12*5=60
12*6=72
12*7=84
12*8=96
12*9=108
12*10=120
13*1=13
13*2=26
13*3=39
13*4=52
13*5=65
13*6=78
13*7=91
13*8=104
13*9=117
13*10=130
14*1=14
14*2=28
14*3=42
14*4=56
14*5=70
14*6=84
14*7=98
14*8=112
14*9=126
14*10=140
15*1=15
15*2=30
15*3=45
15*4=60
15*5=75
15*6=90
15*7=105
15*8=120
15*9=135
15*10=150
```

## 8. WAP to display the table of even number.
```
#include<stdio.h>
int main()
{
int a,b,c,d,e,f;
printf("enter the range\n");
printf("from:");
scanf("%d",&a);
printf("to:");
scanf("%d",&b);

printf("table from %d to %d are:-\n",a,b);

for(c=a;c<=b;c++)
   {
     if(c%2==0) 
     {
      for(d=1;d<=10;d++)
      {
      e=d*c;
      printf("%d*%d=%d\n",c,d,e);
      }
     }
   }
}

```
**OUTPUT**
```
enter the range
from:12
to:16
table from 12 to 16 are:-
12*1=12
12*2=24
12*3=36
12*4=48
12*5=60
12*6=72
12*7=84
12*8=96
12*9=108
12*10=120
14*1=14
14*2=28
14*3=42
14*4=56
14*5=70
14*6=84
14*7=98
14*8=112
14*9=126
14*10=140
16*1=16
16*2=32
16*3=48
16*4=64
16*5=80
16*6=96
16*7=112
16*8=128
16*9=144
16*10=160

```

## 9. WAP to check whether the number is prime or not.
```
#include<stdio.h>
int main()
{ 
int a,b,c,d,e=0;
printf("Enter the number:");
scanf("%d",&a);

for(b=2;b<a;b++)
{
  if(a%b==0)
  { e=1;
  }
}
  if(e==0)
   printf("%d=  a Prime number\n",a);
  else
    printf("%d=not prime number\n",a);
}

```
**OUTPUT**
```
Enter the number:6
6=not prime number
 
Enter the number:7
7=  a Prime number

```

## 11. WAP to find Factorial
```
#include <stdio.h>  
  
int main()  
{  
int c, n, fact = 1;  
  
printf("Enter a number to calculate its factorial\n");  
scanf("%d", &n);

for (c = 1; c <= n; c++)  
fact = fact * c;  
  
printf("Factorial of %d = %d\n", n, fact);  
  
return 0;  
}
```
**OUTPUT**
```
Enter a number to calculate its factorial
6
Factorial of 6 = 720
```

## 12. WAP to find factorial of a number using recursion.
```
#include<stdio.h>
  int fac(int);

  int fac(int a)
  {
  int f;

  if (a==1)
  return a;

  f = a * fac(a-1);
  return f;
  }



  int main()
  {

  int p,a;
  printf("Enter the number:");
  scanf("%d",&a);

  p = fac(a);

  printf("Factorial of %d is %d\n",a,p);

  }

```
**OUTPUT**
```
Enter the number:5
Factorial of 5 is 120
```

## 13. Program to enter the elements in an array, store all even number in different array.
```
#include<stdio.h>
int main()
{

 int p[10],a;

printf("Enter 10 numbers:");
for(a=0;a<10;a++)
{
scanf("%d",&p[a]);
}

printf("Even numbers:-\n");
for(a=0;a<10;a++)
{
if(p[a] % 2 == 0)
{
printf("%d ",p[a]);
}
}


}

```
**OUTPUT**
```
Enter 10 numbers:1
2
3
4
5
6
7
8
9
10

2 4 6 8 10
```

## 6.  Largest number
```
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
```
**OUTPUT**
```
Enter three number:9
5
55
55 is the largest number
 5 is the smallest number
 ```

## 7. Matrix 
```

```
**OUTPUT**
```

```

## 11. Perfect number
```
#include<stdio.h>
int main()
{
int i,j,sum;

for(i=1; i<=500; i++)
{

sum=0;

for(j=1; j<i; j++)
{
if(i % j == 0)
{
sum = sum + j;
}
}

if(sum == i)
{
printf("%d\n",i);
}

}
return 0;
}
```
**OUTPUT**
```
6
28
496
```
## 12. Prime Number
```
#include<stdio.h>
int main()
{ 
int a,b,c,d,e=0;
printf("Enter the number:");
scanf("%d",&a);

for(b=2;b<a;b++)
{
  if(a%b==0)
  { e=1;
  }
}
  if(e==0)
   printf("%d=  a Prime number\n",a);
  else
    printf("%d=not prime number\n",a);
}
```
**OUTPUT**
```
Enter the number:25
25=not prime number
```

## 13. Reversing the Number
```
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
```
**OUTPUT**
```
Enter any 3 digit number:253


                On Reversing the 3 digit number:352
```

## 16. Sum of n Numbers
```
#include<stdio.h>
int main()
{
int n,i, sum=0;
printf("Enter a number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=sum+i;
printf("%d\n",i);
}

printf("Sum of first %d number:%d\n",n,sum);

}
```
**OUTPUT**
```
Enter a number:25
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
Sum of first 25 number:325
```
## 17. Swaping numbers w/o using 3rd variable
```
#include<stdio.h>
int main()
{
int a,b;
printf("Enter a number a:");
scanf("%d",&a);
printf("Enter a number b:");
scanf("%d",&b);
a=a+b;
b=a-b;
a=a-b;
printf("After swaping:\n a:%d\n b:%d\n",a,b);

}
```
**OUTPUT**
```
Enter a number a:25
Enter a number b:13
After swaping:
 a:13
 b:25
```
## 18. Swaping numbers using 3rd variable
```
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
```
**OUTPUT**
```
Enter a number a:13
Enter a number b:25
After swaping:
 a:25
 b:13
```

<!--stackedit_data:
eyJoaXN0b3J5IjpbNzE1OTMxMjk4LDE0OTEzMzU2ODMsMTIwNT
U3Njk1NCwxMzQ2OTA5NzY4LDE1NDI3MjM3NjAsLTIwMzYyMzA4
MjQsMjA4Mjc1NzU5OCwtMjA3MTA4NDczMiwtNjYzODkwMTY5LC
01MDkyNjUwOTBdfQ==
-->