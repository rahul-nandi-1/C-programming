#include<stdio.h>
int main()
{
    int i,a;
    //100,97,94,91....
    a=100;
    for (i=1;a>0;i++)
    {
        printf("%d ",a);
        a=a-3;

    }
    return 0;
}