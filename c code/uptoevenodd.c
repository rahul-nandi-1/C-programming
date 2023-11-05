#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter the ending number of b:");
    scanf("%d", &b);
for (a=1;a<=b;a++)
{
    if (a%2==0)
    {
    printf ("The number is even %d\n",a);
}
else
{
    printf("The number is odd %d\n",a);
}
}
return 0;
}