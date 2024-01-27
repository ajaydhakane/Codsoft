#include <iostream>
#include <cstdlib> // For generating the random number
#include <ctime>   // For time() function
int main()
{
    srand(time(0));
    // Generate a random number between 1 and 100
    int randomNumber = std::rand() % 100 + 1;
    int Max = 7; // Maximum number of attempts allowed
    int usserNumber;
    std::cout << "!!!!!!!!!!!!!!Welcome to the Game World!!!!!!!!!\n";
    std::cout << "!!!!!!!!!!!!!!Guess Number!!!!!!!!!\n";
    std::cout << "Select a number between 1 and 100. Can you guess it?\n";
    for (int attempt = 1; attempt <= Max; ++attempt)
    {
        std::cout << "Attempt " << attempt << "//" << Max << ": Enter your guess: ";
        std::cin >> usserNumber;
        if (usserNumber == randomNumber)
        {
            std::cout << "Congratulations! You guessed the correct number: " << randomNumber << "\n";
            break; // Exit the loop if the guess is correct
        }
        else if (usserNumber < randomNumber)
        {
            std::cout << "Too low! Try again.\n";
        }
        else
        {
            std::cout << "Too high! Try again.\n";
        }
    }
    if (usserNumber != randomNumber)
    {
        std::cout << "Sorry, you've run out of attempts. The correct number was: " << randomNumber << "\n";
    }
    return 0;
}
// By Ajay Dhakane