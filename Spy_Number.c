#include<stdio.h>
int main()
{
    int n,sum=0,product=1,r,s=0;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        s=s+r;
        product=product*r;
        n=n/10;
    }
    if(s==product)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
        
    }
}