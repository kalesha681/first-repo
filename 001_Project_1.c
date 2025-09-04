#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int num, guess, nguess = 1;
    srand(time(0));
    num = rand()%100+1;

    do {
        printf("Guess the number ");
        scanf("%d", &guess);
       if (guess>num) {
          printf("lower number please.\n");
       }
        else if (guess<num)
        {
            printf("Greater number please.\n");
        }
        else {
            printf("Yayy you guessed it right.\n");
            printf("You guessed it in %d attempts", nguess);
        }
        nguess++;
    } while(guess!=num);
    
    return 0;
}