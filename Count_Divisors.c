#include<stdio.h>
int main()
{
    int n,m,p,s=0;
    scanf("%d%d%d",&n,&m,&p);
    for(int i=n;i<=m;i++)
    {
        if(i%p==0)
        {
            s++;
        }
    }
    printf("%d",s);
}