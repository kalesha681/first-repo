#include<stdio.h>

float force(float, float);
int main(){
    float m = 55.0;
    float g = 9.8;
    printf("The force of attraction on a body  of mass %f is %f", m, force(m, g));
    return 0;
}

float force(float m, float g){
    float force = m * g;
    return force;
}