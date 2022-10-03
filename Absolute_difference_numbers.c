#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,s,d1,d2;
    scanf("%d%d",&n,&m);
    s=n%(int)pow(10,m);
    d1=(int)log10(n)+1;
    d2=n/(int)pow(10,d1-m);
    printf("%d",abs(s-d2));
}