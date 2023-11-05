#include<stdio.h>
int main(){
    int n,s,ld;
    printf("Enter the value of n:");
    scanf("%d", &n);
    s=0;
    while(n!=0){
        ld=n%10;
        s=s+ld;
        n=n/10;
    }
    printf ("The sum of digit= %d",s);
    return 0;
}