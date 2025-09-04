#include<stdio.h>

int main(){
    int income;
    float tax = 0;
    printf("Enter your Income: \n ");
    scanf("%d", &income);
    if (income < 250000) {
        printf("Your income is less than 2.5 Lakhs. so no tax for you."); 
    }
    else if (income < 500000 && income > 250000)
    {
        printf("Your income is in between 2.5 Lakhs and 5 Lakhs.");
        tax = tax + 0.05*(income-250000);
    }
    else if (income < 1000000 && income > 500000)
    {
        printf("Your income is in between 5 Lakhs and 10 Lakhs.");
        tax = tax + 0.05*(income-250000);
        tax = tax + 0.2*(income-500000);
    }
    else if (income > 1000000)
    {
        printf("your income is greater than 10 Lakhs.");
        tax = tax + 0.05*(income-250000);
        tax = tax + 0.2*(income-500000);
        tax = tax + 0.3*(income-1000000);
    }
    printf("Total tax to be paid is %f", tax);
    return 0;
}