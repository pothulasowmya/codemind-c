#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int x[n];
    for(int i=0;i<n;i++)
    scanf("%d",&x[i]);
    int s,m,r,k=0;
    for(int i=0;i<n;i++)
    {
        s=x[i];
        m=sqrt(s);
        r=m*m;
        if(r==s)
          k+=x[i];
    }
    printf("%d",k);
}