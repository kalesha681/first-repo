#include<stdio.h>

/*int main(){
    //calculating area of a rectangle using hard coded integers
    int k=6;
    int l=9;
    printf("The area of the rectangle is %d", k*l);;
    return 0;
}*/

int main(){
    // Calculating area of a rectangle using user inputs.
    int a;
    int b;
    printf("Enter the Length: ");
    scanf("%d", &a);
    printf("Enter the Breadth: ");
    scanf("%d", &b);
    printf("The area of the rectangle is %d", a*b);
    return 0;
}