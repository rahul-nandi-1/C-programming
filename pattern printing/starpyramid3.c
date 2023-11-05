#include<stdio.h>
int main(){
    int n,i,j,a,k;
    printf("Enter the value of n:");
    scanf("%d",&n);
    a=1;
    for (i=1;i<=n;i++){
        for (j=1;j<=n-i;j++){
           printf(" ");
        }
        for (k=1;k<=a;k++){
           printf("*");
        }
        a=a+2;
        printf("\n");
    }
    return 0;
}