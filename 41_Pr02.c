#include<stdio.h>

float c2f(int);
int main(){
    float c = 36.7;
    float f = c2f(c);
    printf("The value of %f celcius is %f in fahreinheit", c, f);
    return 0;
}

float c2f(int c){
    float f = (c * 9/5.0) + 32;
    return f;
}