#include<stdio.h>

int main(){
    for (int i = 0; i < 200; i++) {
        if (i==69) {
            break; 
        }
        printf("%d\n", i);
    }
    return 0;
}