#include<stdio.h>
int main(){
    //reverse 12345
    int n,r,d;
    printf("Enter the value of n:");
    scanf("%d", &n);
    d=0;
    while (n>0){
        r=n%10;
        d=d*10+r;
        n=n/10;

    }
    printf("The reverse number is %d\n",d);
    return 0;

}