#include<stdio.h>

void star(int);

int main(){
    int n = 4;
    star(n);
    return 0;
}

void star (int n) {
    for (int i = 0; i < n; i++) {

        for (int j = 0; j < (2*i+1) ; i++) 

        {
            printf("*");
        }
        
        printf("\n");
    }
}