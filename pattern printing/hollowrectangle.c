#include<stdio.h>
int main(){
    int m,n,i,j;
    printf("Enter the value of m&n:");
    scanf("%d%d",&n, &m);
    for (i=1;i<=n;i++){
        for (j=1;j<=m;j++){
            if (j==1||j==m || i==1||i==n) {
                printf ("*");
            }
            else{
                printf (" ");
            }
        }
        printf("\n");
    }
    return 0;
}