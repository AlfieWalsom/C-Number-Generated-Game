#include <iostream>
#include <ctime>
#include <string>

int main()
{
    std::string playersName; // Players name.

    int randomNumber; // Number value of a random number.
    int numberSpand; // From one to value
    int add1; // Default start
    int playersGuess; // The number value of what the player inputs.
    int tries{}; // The number of tries the player has used.

    // Config File
    numberSpand = 5; // From one to value
    add1 = 1; // Default start

    srand(time(NULL));
    
    randomNumber = (rand() % numberSpand) + add1;

    std::cout << "Hello there!" << std::endl;
    std::cout << "What is your name?" << std::endl;
    std::cout << "" << std::endl;

    std::getline(std::cin, playersName);
    std::cout << "" << std::endl;


    std::cout << "Hello there: " << playersName << ", welcome to a brand new guessing name coded from c++." << std::endl;
    std::cout << "" << std::endl;
    std::cout << "To get started, please imput a number from " << add1 << " and " << numberSpand << ". We will tell you if you are too low or too high!" << std::endl;

    do {
        
        std::cout << "Imput: ";
        std::cin >> playersGuess; // Input for data
        tries++;

        if (playersGuess > randomNumber) {
            std::cout << playersName << ", your number is too high!" << std::endl;
        }
        else if(playersGuess < randomNumber) {
            std::cout << playersName << ", your number is too low!" << std::endl;
        }

        if (playersGuess > numberSpand) {
            std::cout << "Your number has to be between " << add1 << " and " << numberSpand << std::endl;
        }



    } while (playersGuess != randomNumber);



    if (playersGuess == randomNumber) {
        std::cout << playersName << ", you have guessed the correct answer. You used " << tries << " tries.";
        std::cout << "" << std::endl;
    }

    return 0;
}
