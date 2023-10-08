#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0)); // Initialize random number generator.
    int number_to_guess = rand() % 100 + 1; // Generate a random number between 1 and 100.

    int user_guess;

    while (true) {
        std::cout << "Guess the number between 1 and 100: ";
        std::cin >> user_guess;

        if (user_guess > number_to_guess) {
            std::cout << "Too high! Try again.\n";
        } else if (user_guess < number_to_guess) {
            std::cout << "Too low! Try again.\n";
        } else {
            std::cout << "Congratulations! You guessed the number.\n";
            break;
        }
    }

    return 0;
}
