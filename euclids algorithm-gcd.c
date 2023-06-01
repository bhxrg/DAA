#include <stdio.h>
#include <conio.h>
int main()
{
int m, n, gcd,r;
printf("enter the two numbers");
scanf("%d %d", &m, &n);
while(n!=0)
{
r=m%n;
m=n;
n=r;
}
gcd=m;
printf("the gcd of the two numbers %d", gcd);
}

