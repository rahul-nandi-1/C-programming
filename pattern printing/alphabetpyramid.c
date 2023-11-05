#include<stdio.h>
int main(){
    //   A                                INCOMPLETE
    //  ABC
    // ABCDE
    //ABCDEFG
    int n,i,j,k,a,d;
    printf("Enter the value of n:");
    scanf("%d", &n);
    a=1;
    for (i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for (k=1;k<=a;k++){
            d=a+64;
            char ch = (char)d;
        printf ("%c", ch);
        
        }
        a=a+2;
        printf ("\n");
    }
    return 0;
}