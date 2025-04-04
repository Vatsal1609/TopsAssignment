#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int randomNumber, userGuess, attempts = 0;

    
    srand(time(NULL));

    randomNumber = rand() % 10 + 1;

    
    printf("Welcome to the Guess the Number Game!\n");


    do {
    
        printf("Input your guess (between 1 and 10): ");
        scanf("%d", &userGuess);

       
        attempts++;

     
        if (userGuess == randomNumber) {
            printf("Congratulations! You guessed the correct number in %d attempts.\n", attempts);
        } else if (userGuess < randomNumber) {
            printf("Number is too low. Try again!\n");
        } else {
            printf("Number is too high. Try again!\n");
        }
	if(attempts==3){
		printf("\n Better Luck Next Time");
		return 0;
	}
    } while (userGuess != randomNumber); 


}

