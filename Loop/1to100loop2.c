#include<stdio.h>
int main()
{
    int a;
    for(a=1;a<=100;a++)
    {
        if(a%2==0)
        {
            printf("The number is even=%d\n",a);
        }
        else
        {
            printf("The number is odd=%d\n",a);
        }
        printf("%d\n",a);
    }
    return 0;
}