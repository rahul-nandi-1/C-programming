#include<stdio.h>
int main(){
    int n,c;
    printf("Enter the value of n:");
    scanf("%d", &n);
    c=0;
    while(n!=0){
        n=n/10;
        c++;
    }
    printf("The no of digits %d",c);
    return 0;
}