#include <stdio.h>
int main(){
    int n;
    printf ("Enter the number of n:");
    scanf ("%d", &n);
    for (int i=0;i<=n;i++){
    int first=1;
    for (int nsp=0; nsp<=n-i;nsp++){
        printf (" ");
    }
    for (int j=0;j<=i;j++){
        printf ("%d ",first);
        first= first*(i-j)/(j+1);
    }
    printf ("\n");
    }

    return 0;
}