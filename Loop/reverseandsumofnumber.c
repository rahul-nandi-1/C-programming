#include<stdio.h>
int main()
{
    int i,n,a;
    printf("Enter the value of n:");
    scanf("%d", &n);
    a=0;
    for(i=2;i<=n-1;i++){
    if (n%i==0){
        a=1;
        break;
    }
}
if (n==1){
    printf ("1 is neither prime nor non prime");
}
else if (a==0){
printf("The given number is prime");
}
else{
printf("The given number is non prime");
}

return 0;
}