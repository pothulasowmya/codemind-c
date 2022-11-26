#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int x[n];
    for(int i=0;i<n;i++)
      scanf("%d",&x[i]);
     int c=0,s=0;
    for(int i=0;i<n;i++)
    {
        if(x[i]!=-999)
        {
        for(int j=0;j<n;j++)
        {
           if(x[i]==x[j]&&i!=j)
           {
             x[j]=-999;
             c++;
           }
        }
        if(c==0)
        {
          printf("%d ",x[i]);
          s++;
        }
        }
        c=0;
    }
    if(s==0)
      printf("-1");
}
