#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float area,r;
    scanf("%d%d%d",&a,&b,&c);
    r=(float)(a+b+c)/2;
    area=sqrt(r*(r-a)*(r-b)*(r-c));
    printf("%0.2f",area);
}