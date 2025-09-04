#include<stdio.h>

int main(){
    int i, j,k;
    printf("Enter number of rows:");
    scanf("%d", &k);
    printf("\n The Pattern is \n");
    for (int i = 0; i <= k; i++) {
        for (int j = 0; j <= i ; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}