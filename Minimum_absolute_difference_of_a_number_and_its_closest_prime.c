#include<stdio.h>
#include<math.h>
    bool isprime(int n)
    {
        int count=0;
       for(int i=2;i<=(int)sqrt(n);i++)
       {
              if(n%i==0)
                    count++;
        }
         if (count==0)
            return true;
         else
            return false;
    }
    int main()
    {
        int n,i;
        int a,b;
        scanf("%d",&n);
        for(i=n; ; i++)
         {
                if(isprime(i))
                {
                 a=i;
                 break;
                 }
         }
        for(i=n; ;i--)
        { 
            if(isprime(i))
               {
                 b=i;
                 break;
                }
           } 
           int k=a-n;
           int m=n-b;
          if((a-n)<=(n-b) )
                printf("%d",k);
          else
              printf("%d",m);
  }
