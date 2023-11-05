#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number:\n");
    scanf("%d",&a);
    if(a==1){
      printf("Its Monday",a);
    }
    if(a==2){
      printf("Its Tuesday",a);
    }
    else if(a==3){
      printf("Its Wednesday",a);
    }
    else if(a==4){
      printf("Its Thursday",a);
    }
    else if(a==5){
      printf("Its friday",a);
    }
    else if(a==6){
      printf("Its saturday",a);
    }
    else if(a==7){
      printf("Its sunday",a);
    }
    else{
      printf("Does not exists",a);
    }
    return 0;
}