#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a=0,b=1,s=0;
    int c=a+b;
    if(a==n || b==n)
       printf("True");
    for(int i=2;i<=n;i++)
    {
        if(c==n)
        {
            s=c;
            break;
        }
        a=b;
        b=c;
        c=a+b;
    }
    if(s==n)
      printf("True");
    else
      printf("False");
}