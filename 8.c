#include<stdio.h>
int main()
{
    int n,i;
    printf("enter a number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    printf("%d ",i*i);
    return 0;
}