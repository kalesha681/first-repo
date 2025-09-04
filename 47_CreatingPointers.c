#include<stdio.h>

int main(){
    int i = 60;
    int *j = &i;
    printf("The address of %d is %u.\n", i, j);
    printf("The value of %d is %d.\n", i, *j);
    printf("The address of %d is %u.\n", i, &i);
    printf("The value of %d is %d.\n", i, i);
    return 0;
}