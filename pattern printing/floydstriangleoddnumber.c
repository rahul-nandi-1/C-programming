#include<stdio.h>
int main(){
    int n,i,j,a;
    printf("Enter the value of n:");
    scanf ("%d",&n);
    a=1;
    for (i=1;i<=n;i++){
        for (j=1;j<=i;j++){
            printf ("%d ",a);
            a=a+2;
        }
        printf ("\n");

    }

    return 0;
}