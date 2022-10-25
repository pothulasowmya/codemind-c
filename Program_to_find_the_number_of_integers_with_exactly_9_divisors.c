#include<stdio.h>
int main()
{
    int n,c=0,s=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==9)
        {
            printf("%d ",i);
            s++;
        }
        c=0;
    }
    printf("
");
    printf("Total=");
    printf("%d",s);
}