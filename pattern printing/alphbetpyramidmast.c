#include<stdio.h>
int main(){
    int n,i,j,k,l,a,b;
    printf ("Enter the value of n :");
    scanf("%d", &n);
    a=n-1;
    for (i=1;i<=n;i++){
        for(j=1;j<=a;j++){
            printf(" ");
            a--;
        }
        for (k=1;k<=i;k++){
            char ch= (char)(k+64);
            printf("%c",ch);
        }
        b=i-1;
        for (l=1;l<=i-1;l++){
            char ch = (char)(l+64);
            printf("%c",ch);
            b--;
        }
        printf("\n");
    }

    return 0;

}