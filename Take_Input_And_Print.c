#include<stdio.h>
int main()
{
    char name[1000];
    fgets(name,sizeof(name),stdin);
    puts(name);
}