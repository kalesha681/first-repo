#include<stdio.h>

int main(){
    int c=6;
    int b=9;
    int a= (c==b)?3:7;
    // in the above case ? is a ternary operator if condition in parenthesis is true then i'll be 3(just in above case) 
    //ortherwise i'll be 7
    printf("The value of a is %d", a);
    return 0;
}