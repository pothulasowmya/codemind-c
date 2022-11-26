
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int x[n];
    for(int i=0;i<n;i++)
    scanf("%d",&x[i]);
    int c=0,s=0,r;
    for(int i=0;i<n;i++)
    {
        int m=x[i];
        while(m>0)
        {
            r=m%10;
            c++;
            m=m/10;
        }
        if(c%2==0)
          s++;
        c=0;
    }
    printf("%d",s);
}
