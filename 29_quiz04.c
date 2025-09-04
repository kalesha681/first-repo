//printing 'n' number of natural numbers in reverse order, by taking input from user.
#include<stdio.h>

int main(){
    int n;
    printf("Enter number of natural numbers to print: ");
    scanf("%d", &n);
    for (int i = n; i; i--) {
        printf("%d\n", i);
    }
    return 0;
}