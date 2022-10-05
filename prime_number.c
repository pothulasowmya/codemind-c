#include<stdio.h>
#include<math.h>
int main()
{
    int n,s=0;
    scanf("%d",&n);
    for(int i=2;i<=(int)sqrt(n);i++)
    {
        if(n%i==0)
        {
            s++;
        }
    }
    if(s==0)
    {
        printf("prime");
    }
    else
    {
        printf("not a prime");
    }
}