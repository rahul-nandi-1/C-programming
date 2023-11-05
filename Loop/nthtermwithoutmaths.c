#include<stdio.h>
int main()
{
    int i,a,n;
    printf("Enter the number n:");
    scanf("%d",&n);
    a=4;
    for(i=1;i<=n;i++)
    {
        printf("%d " ,a);
        a=a+3;
    }
    return 0;
}