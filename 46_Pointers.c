#include<stdio.h>

int main(){
    int i = 69;
    int j = 106;
    printf("The address of %d is %u.\n",i,&i);
    printf("The address of %d is %u.\n",j,&j);
    return 0;
}