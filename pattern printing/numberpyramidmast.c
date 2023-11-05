#include<stdio.h>
int main(){
//   1
//  121
// 12321
//1234321
    int n,i,j,k,l,a,b;
    printf("Enter the value of n:");
    scanf("%d", &n);
    a=n-1;
    for (i=1;i<=n;i++){
        b=i-1;
        for (l=1;l<=a;l++){
            printf (" ");
        }
        a--;
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        for (k=1;k<=i-1;k++){
        printf ("%d",b);
        b--;
        }
        
        //}
        //a=a+2;
        printf ("\n");
    }
    return 0;

}