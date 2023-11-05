#include<stdio.h>
int main(){
    int n,i,j,a,d;
    printf ("Enter the value of n:");
    scanf ("%d",&n);
    //A
    //A B
    //A B C
    //A B C D
    for (i=1;i<=n;i++){
        a=1;
        for(j=1;j<=i;j++){
            d=a+64;
            char ch =  (char)d;

            printf("%c ", ch);
            a++;
        }
        printf ("\n");
    }
    return 0;
}