#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int x[n];
    for(int i=0;i<n;i++)
      scanf("%d",&x[i]);
    int c=0;
    for(int i=0;i<n;i++)
    {
        int r=x[i];
        for(int j=0;j<n;j++)
        {
            if(r>x[j]&&i!=j)
               c++;
        }
        printf("%d ",c);
        c=0;
    }
}