#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int N,A,B,K;
        scanf("%d%d%d%d",&N,&A,&B,&K);
        int c,c1,c2;
        c1=N/A;
        c2=N/B;
        c=N/(A*B);
        if(c1+c2-c>=K)
           printf("Win
");
        else
           printf("Lose
");
    }
}