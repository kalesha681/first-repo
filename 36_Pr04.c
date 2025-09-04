#include<stdio.h>

int main(){
    int n, prime = 1;
    printf("Enter a number otherthan 0 and 1: ");
    scanf("%d", &n);
    for (int i = 2; i < n; i++) {
        if (n%i == 0) {
            prime = 0;
            break;
        }
    }
        if(prime) {
            printf("%d is a prime number", n);
        }
        else {
            printf("%d is not a prime number");
        }
    return 0;
}