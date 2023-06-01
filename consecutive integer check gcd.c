//consecutive integer checking program for gcd of two numbers
#include <stdio.h>
#include<conio.h>
int main()
{
int m,n,t,gcd;
printf("enter the numbers \n");
scanf("%d%d",&m,&n);
t=m>=n?m:n;
while(t>0)
{
  if(m%t==0 && n%t==0)
  {
   gcd=t;
   break;
  }
  else
  t=t-1;
}
printf("the gcd of two numbers is %d",gcd);
}
