#include<stdio.h>
int main(){
    int a,n,i,j;
    printf("Enter the value of n:");
    scanf ("%d",&n);
    a=n;
    for (i=1;i<=n;i++){
        for (j=1;j<=a;j++){
            printf ("%d ",j);
        }
        a--;
        printf ("\n");

    }

    return 0;
}