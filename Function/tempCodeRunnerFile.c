#include<stdio.h>
#include<math.h>
int main(){
    int a,b;
    printf("Enter the value of a ");
    scanf("%d", &a);
    printf("Enter the value of b ");
    scanf("%d", &b);
    int power = pow (a,b);
    printf ("The power of the given no is %d", power);
    return 0;
}