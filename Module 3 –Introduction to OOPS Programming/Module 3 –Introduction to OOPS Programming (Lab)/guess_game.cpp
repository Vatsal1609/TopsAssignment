#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Seed the random number generator
    srand(time(0));

    // Generate a random number between 1 and 100
    int secretNumber = rand() % 100 + 1;

    int guess;
    int attempts = 0;
    bool guessed = false;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I've chosen a number between 1 and 100. Try to guess it!" << endl;

    // Loop until the user guesses the number or runs out of attempts
    while (attempts < 10 && !guessed) {
        attempts++;
        cout << "Attempt #" << attempts << ": Enter your guess: ";
        cin >> guess;

        if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed it in " << attempts << " attempts." << endl;
            guessed = true;
        }
    }

    if (!guessed) {
        cout << "Out of attempts! The number was " << secretNumber << "." << endl;
    }

    return 0;
}
