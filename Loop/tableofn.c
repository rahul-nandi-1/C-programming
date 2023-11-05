#include<stdio.h>
int main()
{
    int a,n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for (a=n;a<=n*10;a=a+n)
    {
        printf("%d ",a);
    }
    return 0;
}

