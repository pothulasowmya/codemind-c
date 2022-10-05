#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int a,rev=0,t,r;
        scanf("%d",&a);
        t=a;
        while(a>0)
        {
            r=a%10;
            rev=rev*10+r;
            a=a/10;
        }
        if(rev==t)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
}