#include<stdio.h>
int rev(int n)
{
    int r,sum=0;
    while(n>0)
    {
        r=n%10;
        sum=r+sum*10;
        n=n/10;
    }
    return sum;
}
int main()
{
    int n,k=0,s=0,m=0,r=0;
    scanf("%d",&n);
    k=n*n;
    s=rev(n);
    r=s*s;
    m=rev(r);
    if(k==m)
      printf("True");
    else
      printf("False");
}