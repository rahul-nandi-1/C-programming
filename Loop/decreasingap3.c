#include<stdio.h>
int main()
//100,50,25...
{
    int n;
    printf("Enter the number of n:");
    scanf("%d",&n);
    float a;
    a=100;
    for (int i=1;a<=n;i++)
    {
        printf("%f" ,a);
        a=a*(1/2);
    }
    return 0;
}