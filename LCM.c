#include<stdio.h>
int main()
{
    int n,m,max,c=0;
    scanf("%d%d",&n,&m);
    if(n>m)
    {
        max=n;
    }
    else
    {
        max=m;
    }
    for(int i=max;;i=i+max)
    {
        if(i%n==0 && i%m==0)
        {
            c=i;
            break;
        }
    }
    printf("%d",c);
}