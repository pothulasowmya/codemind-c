
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int x[n];
    for(int i=0;i<n;i++)
    scanf("%d",&x[i]);
    int s=x[0];
    for(int i=0;i<n;i++)
    {
        if(x[i]!=-999)
        {
        for(int j=0;j<n;j++)
        {
           if(x[j]==x[i]&&i!=j)
             x[j]=-999;
        }
        printf("%d ",x[i]);
        }
    }
}
