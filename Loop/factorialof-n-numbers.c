#include<stdio.h>
int main(){
    int i,n,p;
    printf("Enter the value of n:");
    scanf ("%d", &n);
    p=1;
    for(i=1;i<=n;i++){
        p=p*i;
        printf ("The factorial of %d is :: %d\n",p,i);
    }

    return 0;
}