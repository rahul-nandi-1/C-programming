#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enter the value of n:");
    scanf ("%d",&n);
    //1234567
    //123 567
    //12   67
    //1     7
    int nsp=1;
    int nst=n;
    //int a =1;
    for (i=1;i<=2*n+1;i++){
            printf ("%d",i);
            
        }
        printf ("\n");
    for (i=1;i<=n;i++){
        int a=1;
        for (j=1;j<=nst;j++){
            printf ("%d",a);
            a++;
        }
        for (int k=1;k<=nsp;k++){
            printf(" ");
            a++;
        }
         for (j=1;j<=nst;j++){
            printf ("%d",a);
            a++;

        }
        //a++;
        nsp+=2;
        nst--;
        printf("\n");
    }
    return 0;
}