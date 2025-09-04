#include<stdio.h>

int main(){
    int i = 4;
    do {
        printf("the value of i is : %d\n", i);
        i-=1;
    } while(i>0);
    return 0;
}