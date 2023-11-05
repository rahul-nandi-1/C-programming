#include<stdio.h>
void greet(){
printf ("Good morning\n");
printf ("How are you?\n");
return;
}
int main(){
    for (int i=1;i<=3;i++){
    greet();
    }
    //greet();
   // greet();
    return 0;
}