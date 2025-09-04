#include<stdio.h>
int factorial(int);
int main(){
   printf("%d",factorial(5));
    return 0;
}
int factorial (int n) {
    int f;
    if (n==0 || n==1) {
        return 1;
    }
    else {   
    f = n * factorial(n-1);
  }
}