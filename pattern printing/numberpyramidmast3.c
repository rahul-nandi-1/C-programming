#include <stdio.h>
int main(){
    int n,i,j,k;
    printf ("Enter the number n:");
    scanf ("%d", &n);
    for (i=1;i<=2*n+1;i++){
        printf ("%d", i);
    }
    int nst=n;
    int nsp=1;
    printf ("\n");
        for (i=1;i<=n;i++){
            //a=1;
            for (j=1;j<=nst;j++){
                printf ("%d",j);
            }
            for (k=1;k<=nsp;k++){
                printf(" ");
            }
            for (j=1;j<=nst;j++){
                printf("%d",j);
            }
            nsp+=2;
            nst--;
            printf("\n");
        }
    return 0;
}