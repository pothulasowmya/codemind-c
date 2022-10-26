#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int k=n;
    int s,sum=0,r,m=0,i=1;
    while(n>0)
    {
        s=n%10;
        sum=sum*10+s;
        n=n/10;
    }
    while(sum>0)
    {
        r=sum%10;
        m=pow(r,i)+m;
        sum=sum/10;
        i++;
    }
    if(m==k)
       printf("True");
    else 
       printf("False");
}