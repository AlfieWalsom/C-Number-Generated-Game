#include <iostream>
#include <ctime>
#include <string>

using namespace std;

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

    cout << "Hello there!" << endl;
    cout << "What is your name?" << endl;
    cout << "" << endl;

    getline(cin, playersName);
    cout << "" << endl;


    cout << "Hello there: " << playersName << ", welcome to a brand new guessing name coded from c++." << endl;
    cout << "" << endl;
    cout << "To get started, please imput a number from " << add1 << " and " << numberSpand << ". We will tell you if you are too low or too high!" << endl;

    do {
        
        cout << "Imput: ";
        cin >> playersGuess; // Input for data
        tries++;

        if (playersGuess > randomNumber) {
             cout << playersName << ", your number is too high!" << endl;
        }
        else if(playersGuess < randomNumber) {
            cout << playersName << ", your number is too low!" << endl;
        }

        if (playersGuess > numberSpand) {
            std::cout << "Your number has to be between " << add1 << " and " << numberSpand << std::endl;
        }



    } while (playersGuess != randomNumber);



    if (playersGuess == randomNumber) {
        cout << playersName << ", you have guessed the correct answer. You used " << tries << " tries.";
        cout << "" << endl;
    }

    return 0;
}
