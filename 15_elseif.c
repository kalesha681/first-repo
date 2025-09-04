#include<stdio.h>

int main(){
    // secnario 1
    int a = 17;
    // if(a>68){
    //     printf("You're eligible to drive.");
    // }
    // else if(a>15){
    //     printf("We'll give you a toy car, you can drive it.");
    // }
    // else{
    //     printf("you're not eligible to drive MF.");
    // }

    //secnario 2
    if(a>18){
        printf("You can drive.\n");
    }
    if(a>15 && a<18){
        printf("You can drive toy cars.\n");
    }
    if(a<15){
        printf("Fuck off, you're just a kid.");
    }
    return 0;
}