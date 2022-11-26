#include<stdio.h>
int main()
{
    int n,m,s=1,sum=0,r;
    scanf("%d",&n);
    m=n;
    while(n>0)
    {
        r=n%10;
        s=1;
        for(int i=1;i<=r;i++)
        {
          s=s*i;
        }
        sum=sum+s; 
        n=n/10;
    }
    if(sum==m)
    {
      printf("The number ");
      printf("%d",m);
      printf(" is a strong number");
    }
    else{
     printf("The number ");
      printf("%d",m);
      printf(" is not a strong number");
    }
}