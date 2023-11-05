#include<stdio.h>
int main(){
    // sum of 1-2+3-4+5-6+7......n
    int n,i,s;
    printf("Enter the value of n:");
    scanf ("%d", &n);
    s=0;
    for(i=1;i<=n;i++){
        if(i%2!=0){
            s=s+i;
        }
        else{
            s=s-i;
        }
        }
    printf("The sum of the series is %d\n", s);
    return 0;

}