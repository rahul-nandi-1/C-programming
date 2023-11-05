#include <stdio.h>


int main(){
    void india();
    india();
    return 0;
}
void india(){
    printf ("You are in India\n");
    void austrelia();
    austrelia();
    return;
}
void austrelia(){
    printf ("You are in Austrelia\n");
    void england();
    england();
    return;
}
void england(){
    printf ("You are in England\n");
    return;
}