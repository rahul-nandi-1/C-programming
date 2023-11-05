#include<stdio.h>
int main(){
    int n,i,j,k;
    printf("Enter the number of n:");
    scanf ("%d", &n);
    int nst=n;
    int nsp =0;
    for (i=1;i<=n;i++){
        for (j=1;j<=nsp;j++){
            printf (" ");
        }
        for (k=1;k<=nst;k++){
            printf ("*");
        }
        nst--;
        nsp++;
        printf ("\n");
    }
    return 0;
}