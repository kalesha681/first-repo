#include<stdio.h>

int main(){
    char character;
    printf("Enter your character: ");
    scanf("%c", &character);
    if (character >= 97 && character <= 122) {
        printf("This is a lowercase character");
    }
    else {
        printf("This is not a lowercase character");
    }
    return 0;
}