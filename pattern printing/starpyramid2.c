#include<stdio.h>
int main(){
    int n,i,j,k;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int nsp =n-1;
    int nst =1;
    for (i=1;i<=n;i++){
        for (j=1;j<=nsp;j++){
            printf(" ");
        }
        nsp=nsp-1;
        for (k=1;k<=nst;k++){
           printf("*");
        }
        nst=nst+2;
        printf("\n");
    }
    return 0;
}