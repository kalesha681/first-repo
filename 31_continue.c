#include<stdio.h>

int main(){
    int t = 9;
    while (t<20) {
        if (t==17) {
            continue; 
        }
        printf("The value of t is %d\n", t);
        t+=1;
    }
    return 0;
}