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

