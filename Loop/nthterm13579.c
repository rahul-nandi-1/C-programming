#include<stdio.h>
int main()
{
    int a,n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    //1,3,5,7,9....
    for (a=1;a<=2*n-1;a=a+2)
    {
        printf("%d ",a);
    }
    return 0;
}

