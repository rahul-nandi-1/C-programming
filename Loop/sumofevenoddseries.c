#include<stdio.h>
int main(){
    int n,i,s;
    //1-2+3-4+5-6+7-8
    printf("Enter the value of n:");
    scanf("%d", &n);
    s=0;
    if (i%2!=0){
            s=-n/2;
        }
        else{
            s=-n/2+n;
        }
        printf ("The sum of the series is %d\n",s);
    

    return 0;
}