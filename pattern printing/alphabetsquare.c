#include<stdio.h>
int main(){
    int a,n,i,j;
    printf("Enter the value of n:");
    scanf ("%d",&n);
    //A B C D
    //A B C D
    //A B C D                     ASCII VALUE OF A=65,B=66,C=67.....& a=97
    for (i=1;i<=n;i++){
        a=1;
        for (j=1;j<=n;j++){
            int d=a+64;
            char ch = (char)d;
            printf ("%c ",ch);
         a++;
        }
        printf ("\n");

    }

    return 0;
}