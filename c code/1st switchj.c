#include<stdio.h>
int main()
{
int n;
printf("Enter the value of n");
scanf("%d",&n);
switch (n)
{
case 1:
printf("One");
break;
case 2:
printf("Two");
break;
case 3:
printf("Three");
break;
default:
printf("Enter the value of n between 1to 4");
}
return 0;
}