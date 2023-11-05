#include<stdio.h>
int main(){
    int n,s,ld;
    printf("Enter the value of n:");
    scanf("%d", &n);
    s=0;
    while(n!=0){
        ld=n%10;
            if(ld % 2 == 0){
                printf("%d",ld);
                s=s+ld;
            }
            n=n/10;

            
        

    }
    printf ("The sum of even digits is %d\n",s);

    return 0;
}