#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++)
    {
        int c=0,temp=i;
        while(temp>0)
        {
            int p=temp%10;
            if(p==0 || i%p!=0)
                c=1;
            temp=temp/10;
        }
        if(c==0)
            printf("%d ",i);
    }
}