
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int x[n];
    for(int i=0;i<n;i++)
    scanf("%d",&x[i]);
    int s=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i!=j)
              s=s*x[j];
        }
        printf("%d ",s);
        s=1;
    }
}