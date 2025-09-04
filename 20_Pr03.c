#include<stdio.h>
int main(){

    int year;

    printf("Enter the year:");
    scanf("%d", &year);

    if (year % 4 != 0) {
        printf("Its just a common year");
    }
    else if (year % 100 != 0)
    {
        printf("It is a leap year");
    }
    else if (year % 400 != 0)
    {
        printf("Its not a leap year");
    }
    else {
        printf("it is a leap year");
    }
    return 0;
}