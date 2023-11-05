#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number a:\n");
    scanf("%d",&a);
    if (a==1)
    {
        printf("Sunday",a);
    }
    else if(a==2)
    {
    printf("Monday",a);
    }
     else if(a==3)
    {
    printf("Tuesday",a);
    }
     else if(a==4)
    {
    printf("Wednesday",a);
    }
     else if(a==5)
    {
    printf("Thursday",a);
    }
     else if(a==6)
    {
    printf("Friday",a);
    }
     else if(a==7)
    {
    printf("Saturday",a);
    }
     else
    {
    printf("Invalid",a);
    }
    return 0;
}