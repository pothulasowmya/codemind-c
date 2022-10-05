#include<stdio.h>
#include<math.h>
int main()
{
    int n,rev=0,r;
    scanf("%d",&n);
    if(n>0)
    {
        while(n>0)
        {
            r=n%10;
            rev=rev*10+r;
            n=n/10;
        }
        printf("%d",rev);
    }
    else
    {
        n=abs(n);
        while(n>0)
        {
            r=n%10;
            rev=rev*10+r;
            n=n/10;
        }
        printf("%d",-rev);
    }
}