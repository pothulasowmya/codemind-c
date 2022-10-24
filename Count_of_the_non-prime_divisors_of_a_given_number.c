#include<stdio.h>
bool prime(int n)
{
    int c=0;
    if(n<2)
       return false;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==0)
        return true;
    else
        return false;
}
int main()
{
    int n,c=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            if(!prime(i))
            c++;
        }
    }
    printf("%d",c);
}