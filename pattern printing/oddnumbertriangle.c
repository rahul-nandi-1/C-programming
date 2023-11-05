#include<stdio.h>
int main(){
    int a,n,i,j;
    printf("Enter the value of n:");
    scanf ("%d",&n);
    for (i=1;i<=n;i++){
        a=1;
        for (j=1;j<=i;j++){
            printf ("%d ",a);
            a=a+2;
        }
        printf ("\n");

    }

    return 0;
}