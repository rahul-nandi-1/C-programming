#include<stdio.h>
int main()
{
int year;
printf("Enter the year\n");
scanf("%d",&year);
if ((year%4==0)||(year%400==0))
{
printf("Leapear");
}
else
{
    printf("Non Lepear");
}
return 0;
}