#include<stdio.h>

double avg(int, int,int);

int main(){
    printf("The average of 6,9 and 7 is %lf", avg(6,9,7));
    return 0;
}

double avg (int a, int b, int c) {
    return (a+b+c)/3.0;
}