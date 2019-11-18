![College  Logo](https://www.gndec.ac.in/logo.png)
# *PPS Assignment*
## ***Submitted By :***
##### ***Name : Ashutosh Sharma***
##### ***Roll no. : 1921015***
##### ***Branch : Information technology (I.T.)***
##### ***Section : I.T. A1***

### ***Submitted To:- Ms. Ranjodh Kaur***

# My C programs

## 1. To find Area of circle
```
#include<stdio.h>
int main()


{

float diameter, perimeter, area;
printf("Enter diameterr:");
scanf("%f", &diameter);
perimeter = 3.14 * diameter;
area = perimeter * diameter / 4.0;
printf("\n\nPerimeter:%.2f \n\nArea:%.2f\n",perimeter,area);
}
```
**OUTPUT**
```
Enter diameterr:5


Perimeter:15.70 

Area:19.62
```

## 2. To find Area of triangle
```
#include<stdio.h>
#include<math.h>
int main()
{
// to compile thiss use gcc AreaTriangle.c -lm 

float a,b,c,g,h;

printf("\n\n\t\tEnter any three sides of triangle from higher to low:");
scanf("%f%f%f",&a,&b,&c);

g=(a+b+c)/2;

h=sqrt((g)*(g-a)*(g-b)*(g-c));

printf("Perimeter is:%.2f\n",2*g);
printf("Area of triangle is:%.2f\n",h);
return 0;
}
```
**OUTPUT**
```

                Enter any three sides of triangle from higher to low:5
4
3
Perimeter is:12.00
Area of triangle is:6.00
```
## 3. To convert  Degree To Fahrenheit
```
#include<stdio.h>
int main()
{
printf("\t\t\taa gyea pher convert krn\n\n");
printf("\t\t\tchll pehla degree toh fahrenheit vch krde aa\n\n");

float c;
float g;
printf("\n\thon ds de koi number jeada mein convert kra:");
scanf("%f",&c);
g=((9*c)/5)+32;
printf("\n\n\t\taa le chk fahrenheit vch:%.3f\n\n\n\n\n",g);
}
```
**OUTPUT**
```
 aa gyea pher convert krn

                        chll pehla degree toh fahrenheit vch krde aa


        hon ds de koi number jeada mein convert kra:23


                aa le chk fahrenheit vch:73.400
```
## 4. Fizz Buzz Game
```
#include<stdio.h>
int main()
{
int p;
for(p=1;p<=20;p++)

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
```
**OUTPUT**
```
1
2
fizz
4
buzz
fizz
7
8
fizz
buzz
11
fizz
13
14
fizzbuzz
16
17
fizz
19
buzz
```
## 5. Program which will accept everything
```
#include<stdio.h>
int main()
{
int a;
float b;
char g;
printf("Enter any interger:\n");
scanf("%d",&a);
printf("Enter any decimal number:\n");
scanf("%f",&b);
printf("Enter any character:\n");
scanf(" %c",&g);
char name[220];
printf("Enter any name:\n");
scanf("%s",&name);
}
```
**OUTPUT**
```
Enter any interger:
5
Enter any decimal number:
2.3
Enter any character:
d
Enter any name:
ashu
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
#include<stdio.h>
int main()
{
int a,b,c,e,g,h,i,j,k,l,m,o,p,q,r,s,t,u,v,w,x,y,z,aa,bb,cc,ee,gg,hh,ii,jj,kk,ll,mm,oo,pp,qq,rr,ss,tt,uu,vv,ww,xx,yy,zz,aaa,bbb,ccc,eee,ggg,hhh,iii,jjj;
int kkk,lll,mmm,ooo,ppp,qqq,rrr,sss,ttt,uuu,vvv,www,xxx,yyy,zzz,ab,ba,ca,ea,ga,ha,ia,ja,ka,la,ma,oa,pa,qa,ra,sa,ta,ua,va,wa,xa,ya,za,cb,eb,gb,hb,ib,jb;
int kb,lb,mb,ob,pb,qb,rb,sb;
printf("Enter the number of rows and coloums of first matrix:");
scanf("%d%d",&a,&c);
printf("Enter the number of rows and colums of second matrix:");
scanf("%d%d",&b,&e);
if(a==e&&c==b&&a==2&&c==2)
{
printf("\t|a1   a2|     |b1     b2|\n");
printf("\t|       |  X  |         |\n");
printf("\t|a3   a4|     |b3     b4|\n");
printf("\t|       |     |         |\n");
printf("Enter values a1,a2,a3,a4,b1,b2,b3,b4:");
scanf("%d%d%d%d%d%d%d%d",&g,&h,&i,&j,&k,&l,&m,&o);
printf("\t|%d    %d|     |%d     %d|\n",g,h,k,l);
printf("\t|      |  X  |       |\n");
printf("\t|%d    %d|     |%d     %d|\n",i,j,m,o);
printf("\t|      |     |       |\n");
p=g*k;
q=h*m;
r=g*l;
s=h*o;
t=i*k;
u=j*m;
v=i*l;
w=j*o;
x=p+q;
y=r+s;
z=t+u;
aa=v+w;
printf("\t\tOn multipling these two matrix\n\tResult is:-\n");
printf("\t|%d     %d|\n",x,y);
printf("\t|         |\n");
printf("\t|%d     %d|\n",z,aa);
printf("\t|         |\n");
}
else if(a==e&&c==b&&a==2&&c==3)
{
printf("\t|a1   a2    a3|     |b1     b2|\n");
printf("\t|             |     |         |\n");
printf("\t|a4   a5    a6|  X  |b3     b4|\n");
printf("\t|             |     |         |\n");
printf("\t|           |     |b5     b6|\n");
printf("\t|           |     |         |\n");
printf("Enter the values a1,a2,a3,a4,a5,a6,b1,b2,b3,b4,b5,b6:");
scanf("%d%d%d%d%d%d%d%d%d%d%d%d",&bb,&cc,&ee,&gg,&hh,&ii,&jj,&kk,&ll,&mm,&oo,&pp);
printf("\t|%d    %d    %d|     |%d     %d|\n",bb,cc,ee,jj,kk);
printf("\t|           |  X  |       |\n");
printf("\t|%d    %d    %d|     |%d     %d|\n",gg,hh,ii,ll,mm);
printf("\t|           |     |       |\n");
printf("\t|           |     |%d     %d|\n",oo,pp);
printf("\t|           |     |       |\n");
qq=bb*jj;
rr=cc*ll;
ss=ee*oo;
tt=bb*kk;
uu=cc*mm;
vv=ee*pp;
ww=gg*jj;
xx=hh*ll;
yy=ii*oo;
zz=gg*kk;
aaa=hh*mm;
bbb=ii*pp;
ccc=qq+rr+ss;
eee=tt+uu+vv;
ggg=ww+xx+yy;
hhh=zz+aaa+bbb;
printf("\n\n\t\tOn Multipling these two matrix\n\n\tResult Is:-\n");
printf("\t|%d      %d |\n",ccc,eee);
printf("\t|         |\n");
printf("\t|%d      %d |\n",ggg,hhh);
printf("\t|         |\n");
}

else if(a==3&&c==3&&c==b&&a==e)
{
printf("\t|a1   a2    a3|     |b1    b2    b3|\n");
printf("\t|             |     |              |\n");
printf("\t|a4   a5    a6|  X  |b4    b5    b6|\n");
printf("\t|             |     |              |\n");
printf("\t|a7   a8    a9|     |b7    b8    b9|\n");
printf("\t|             |     |              |\n");
printf("Enter the values a1,a2,a3,a4,a5,a6,a7,a8,a9,b1,b2,b3,b4,b5,b6,b7,b8,b9:");
scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d",&iii,&jjj,&kkk,&lll,&mmm,&ooo,&ppp,&qqq,&rrr,&sss,&ttt,&uuu,&vvv,&www,&xxx,&yyy,&zzz,&ab);
printf("\t|%d   %d    %d|     |%d    %d    %d|\n",iii,jjj,kkk,sss,ttt,uuu);
printf("\t|          |     |           |\n");
printf("\t|%d   %d    %d|  X  |%d    %d    %d|\n",lll,mmm,ooo,vvv,www,xxx);
printf("\t|          |     |           |\n");
printf("\t|%d   %d    %d|     |%d    %d    %d|\n",ppp,qqq,rrr,yyy,zzz,ab);
printf("\t|          |     |           |\n");

ba=iii*sss;
ca=jjj*ttt;
ea=kkk*uuu;
ga=iii*vvv;
ha=jjj*www;
ia=kkk*xxx;
ja=iii*yyy;
ka=jjj*zzz;
la=kkk*ab;
ma=lll*sss;
oa=mmm*ttt;
pa=ooo*uuu;
qa=lll*vvv;
ra=mmm*www;
sa=ooo*xxx;
ta=lll*yyy;
ua=mmm*zzz;
va=ooo*ab;
jb=ppp*sss;
kb=qqq*ttt;
lb=rrr*uuu;
mb=ppp*vvv;
ob=qqq*www;
pb=rrr*xxx;
qb=ppp*yyy;
rb=qqq*zzz;
sb=rrr*ab;
wa=ba+ca+ea;
xa=ga+ha+ia;
ya=ja+ka+la;
za=ma+oa+pa;
cb=qa+ra+sa;
eb=ta+ua+va;
gb=jb+kb+lb;
hb=mb+ob+pb;
ib=qb+rb+sb;

printf("\n\n\t\tOn Multipling these two matrix\n\n\t\t\tResult Is:-\n\n");
printf("\t|%d    %d    %d|\n",wa,xa,ya);
printf("\t|           |\n");
printf("\t|%d    %d    %d|\n",za,cb,eb);
printf("\t|           |\n");
printf("\t|%d    %d    %d|\n",gb,hb,ib);
printf("\t|           |\n");
}
else
printf("\t\tWrong input\n");
}
```
**OUTPUT**
```
Enter the number of rows and coloums of first matrix:2
3
Enter the number of rows and colums of second matrix:3
2
        |a1   a2    a3|     |b1     b2|
        |             |     |         |
        |a4   a5    a6|  X  |b3     b4|
        |             |     |         |
        |           |     |b5     b6|
        |           |     |         |
Enter the values a1,a2,a3,a4,a5,a6,b1,b2,b3,b4,b5,b6:1
2
3
4
5
6
7
8
9
1
2
3
        |1    2    3|     |7     8|
        |           |  X  |       |
        |4    5    6|     |9     1|
        |           |     |       |
        |           |     |2     3|
        |           |     |       |


                On Multipling these two matrix

        Result Is:-
        |31      19 |
        |         |
        |85      55 |
        |         |
```
## 8.  Multipurpose
```
#include<stdio.h>
int main()
{
int a,b,c,d,e,f,g;
printf("Enter two numbers:");
scanf("%d %d",&a,&b);
c=a+b;
d=a*b;
e=a/b;
f=a-b;
g=a%b;
printf("On adding these two number:%d\n",c);
printf("On subtracting these two number:%d\n",f);
printf("On multipilation these two number:%d\n",d);
printf("On division these two number:%d\n",e);
printf("Mod of these two number:%d\n",g);
}
```
**OUTPUT**
```
Enter two numbers:6
9
On adding these two number:15
On subtracting these two number:-3
On multipilation these two number:54
On division these two number:0
Mod of these two number:6
```
## 9.  My own Calculator
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
## 10. Pattern 1
```
#include<stdio.h>
int main()
{
for(int row=1;row<=4;row++)
        {
         for(int colm=1;colm<=5;colm++)
         {
          if(colm<=6-row && colm>=row)
          printf("*");
          else
          printf(" ");
         }
         printf("\n");
        }
}
```
**OUTPUT**
```
*****
 *** 
  *  
     
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
## 14. Shop Bill
```
#include<stdio.h>
int main()
{
printf("\n\t\tprice of one pen is:10");
printf("\n\n\t\tprice of one pencil is:5");
printf("\n\n\t\tprice of one sharpner is:2");

int a,b,c,g,e,h;

printf("\nPen:");
scanf("%d",&a);

printf("\npencil:");
scanf("%d",&b);

printf("\nsharpner:");
scanf("%d",&c);

        g=10*a;
        e=5*b;
        h=2*c;

printf("\ncost of pens is:%d",g);
printf("\ncost of pencils is:%d",e);
printf("\ncost of sharpners is:%d",h);

int i=g+e+h;
printf("\n\n\t\ttotal cost:%d\n",i);

return 0;
}
```
**OUTPUT**
```

                price of one pen is:10

                price of one pencil is:5

                price of one sharpner is:2
Pen:25

pencil:13

sharpner:6

cost of pens is:250
cost of pencils is:65
cost of sharpners is:12

                total cost:327
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
## 19.  Table of any Number
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
Enter the number for the table:25
                25 * 0 = 0
                25 * 1 = 25
                25 * 2 = 50
                25 * 3 = 75
                25 * 4 = 100
                25 * 5 = 125
                25 * 6 = 150
                25 * 7 = 175
                25 * 8 = 200
                25 * 9 = 225
                25 * 10 = 250
```
## 20. Individual 3 digit
```
#include<stdio.h>
int main()
{
int a,b,c,e,g,h;
printf("Enter a three digit number:");
scanf("%d",&g);
a=g/100;
b=((g%100)/10);
c=((g%100)%10);
e=a+b+c;
h=a*b*c;
printf("sum of individual number is:%d\n",e);
printf("multipling individualy all 3 digit:%d\n",h);
}
```
**OUTPUT**
```
Enter a three digit number:253
sum of individual number is:10
multipling individualy all 3 digit:30
```
## 21. Experience
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

                        Enter the experience of 1 employe:12.6

                        Enter the experience of 2 employe:25

                        Enter the experience of 3 employe:13.25

                        Total experience employes:50.85

```
## 22.  Odd or Even
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
 Enter any number:25
25 is odd number
```
## 23. Use of array in structure
```
#include<stdio.h>

struct student
{
int roll;
char name[25];
};

int main()

{

int i;
struct student st[5];
printf("Enter student information\n");
for(i=1;i<=5;i++)
  {
   printf("Enter roll no.:");
   scanf("%d",&st[i].roll);
   printf("enter the name:");
   scanf("%s", &st[i].name);
  }
printf("stdents info.\n");
for(i=1;i<=5;i++)
{
printf("rollNo. %d\n name:%s\n",st[i].roll,st[i].name);
}

return 0;
}
```
**OUTPUT**
```
Enter student information
Enter roll no.:3
enter the name:ashu
Enter roll no.:13
enter the name:arsh
Enter roll no.:25
enter the name:harsh
Enter roll no.:11
enter the name:deep
Enter roll no.:23
enter the name:preet
stdents info.
rollNo. 3
 name:ashu
rollNo. 13
 name:arsh
rollNo. 25
 name:harsh
rollNo. 11
 name:deep
rollNo. 23
 name:preet
```
## 24. Find Factorial
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
## 25. Find Factorial using Recursion
```
#include<stdio.h>  
  
long factorial(int);  
  
int main()  
{  
int n;  
long f;  
  
printf("Enter an integer to find its factorial\n");  
scanf("%d", &n);  
  
if (n < 0)  
printf("Factorial of negative integers isn't defined.\n");  
else  
{  
f = factorial(n);  
printf("%d! = %ld\n", n, f);  
}  
  
return 0;  
}

long factorial(int n)  
{  
if (n == 0)  
return 1;  
else  
return(n * factorial(n-1));  
}
```
**OUTPUT**
```
Enter an integer to find its factorial
9
9! = 362880
```
<!--stackedit_data:
eyJoaXN0b3J5IjpbMTU0MjcyMzc2MCwtMjAzNjIzMDgyNCwyMD
gyNzU3NTk4LC0yMDcxMDg0NzMyLC02NjM4OTAxNjksLTUwOTI2
NTA5MF19
-->