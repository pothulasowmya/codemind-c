#include<stdio.h>
int happy(int n)
{
    int r,sum=0;
    while(n>0)
    {
        r=n%10;
        sum=r*r+sum;
        n=n/10;
    }
    return sum;
}
int main()
{
    int n;
    scanf("%d",&n);
    while(n!=1 && n!=4)
    {
        n=happy(n);
    }
    if(n==1)
       printf("True");
    else
       printf("False");
}