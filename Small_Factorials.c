# include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        int a=1;
        int s=arr[i];
        if(s==0)
        {
            printf("1
");
        }
        else
        {
        for(int j=1;j<=s;j++)
        {
            a=a*j;
        }
        printf("%d
",a);
        }
        
    }
}