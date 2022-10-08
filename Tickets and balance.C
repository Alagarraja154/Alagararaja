#include<stdio.h>
#include<conio.h>
void main()
{
int m,t,n,u,v,z;
clrscr();

printf("enter your amount : ");
scanf("%d",&m);
printf("enter the ticket :");
scanf("%d",&t);
z=5*t;
if(m%5==0)
{
if(z<=m)
{
u=t*5;
v=m-u;
printf("%d tickets is claimed\n",t);
printf("your balance is %d",v);
}
else
printf("you have entered exess of tickets");
}
else
printf("not accepted");

getch();
}
