#include<stdio.h>

int main(){
    printf("Enter a number: ");
    int a;
    scanf("%d", &a);
    printf("%d", a%97);
    //If it returns 0 then given number is divisible otherwise not.
    return 0;
}