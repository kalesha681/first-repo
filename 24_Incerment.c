#include<stdio.h>

int main(){
    int D = 69;
    printf("--D = %d\n", --D);
    // it first decrements D and then prints.
    printf("D-- = %d\n",D-- ); 
    // it first prints D and then decrements.
    return 0;
}