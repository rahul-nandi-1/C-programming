#include<stdio.h>
int main(){
    int a,b;
    printf ("Enter the value of a and b:");
    scanf ("%d%d", &a,&b);
    int temp;
    temp =a;
    a=b;
    b=temp;
    printf ("The value of a is %d\n", a);
    printf ("The value of b is %d",b);
    return 0;
}