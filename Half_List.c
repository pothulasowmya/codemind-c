
#include<stdio.h>
int main()
{
    int n,m,s;
    scanf("%d",&n);
    if(n%2==0)
    {
      m=n/2;
      s=n/2;
    }
    else
    {
      m=(int)n/2;
      s=m+1;
    }
    int x[n];
    for(int i=0;i<n;i++)
    scanf("%d",&x[i]);
    for(int i=n-1;i>=s;i--)
    {
        printf("%d ",x[i]);
    }
    for(int i=0;i<m;i++)
    {
        printf("%d ",x[i]);
    }
}
