#include <stdio.h>
void england(){
    printf ("You are in England\n");
    return;
}
void austrelia(){
    printf ("You are in Austrelia\n");
    england();
    return;
}
void india(){
    printf ("You are in India\n");
    austrelia();
    return;
}
int main(){
    india();
    return 0;
}