#include<stdio.h>

int main(){
    int f, c;
    int low, up, step;
    low = 0;
    up = 212;
    step = 2;

    f = low;
    while (f<=up) {
        c = 5*(f-32)/9;
        printf("%d\t \t%d\n", f, c);
        f = f + step;
    }
    
    
    return 0;
}