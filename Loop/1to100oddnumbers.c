#include<stdio.h>
int main()
{
    int i;
    //1to100 odd numbers
    for(i=1;i<=100;i++){
        if (i%2!=0){
            printf("%d ",i);
        }
    }
    return 0;
}