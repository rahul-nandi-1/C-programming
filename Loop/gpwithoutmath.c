#include<stdio.h>
int main(){
int a,i,n;
printf("Enter the number n:");
scanf("%d", &n);
a=2;
for(i=1;i<=n;i++){
    printf("%d\t",a);
    a=a*2;
}
return 0;
}
