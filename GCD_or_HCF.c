#include<stdio.h>
int main()
{
    int n,m,min,g=0;
    scanf("%d%d",&n,&m);
    if(n>m)
    {
        min=m;
    }
    else
    {
        min=n;
    }
    for(int i=min;;i--)
    {
        if(n%i==0 && m%i==0)
        {
             g=i;
             break;
        }
    }
    printf("%d",g);
}