#include<stdio.h>
int rev(int n)
{
    int r,s=0;
    int temp=n;
    while(n>0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    if(temp==s)
        return true;
    else
        return false;
}
int main()
{
    int n,s,k;
    scanf("%d",&n);
    for(int i=n+1;;i++)
    {
        if(rev(i))
        {
            s=i;
            break;  
        }
           
    }
    for(int i=n-1;;i--)
    {
        if(rev(i))
        {
            k=i;
            break;  
        }
           
    }
    if((s-n)>(n-k))
      printf("%d",k);
    else if((s-n)==(n-k))
       printf("%d %d",k,s);
    else
        printf("%d",s);
        

}