#include<stdio.h>
#include<math.h>
int main()
{
    int n,a;
    scanf("%d",&n);
    float b;
    b=(float)sqrt(n);
    a=(int)b;
    if((b-a)>0)
    {
        printf("False");
    }
    else
    {
        printf("True");
    }
}