#include<stdio.h>
int main()
{
    int n,i;
    printf("enter a number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    printf("%d ",n+1-i);
    return 0;
}