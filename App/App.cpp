/**
Gaming Application
Game1: Guessing Game*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::cin;
using std::endl;
using std::string;

//function declaration
string getUserName();
void menu();
//Funtions associated to the Guessing Game
void guessingGame();
int userGuess();
void checkGuess(int, int);
int rangeUser();


//Functions associated to the snake Game
void snake();

//Functions associated to the snake Game
void sukobank();

//Functions associated to the snake Game
void puzzle();


int main()
{
    menu();
    return 0;
}

//function definition
string getUserName()
{
    string userName;
    cout << "Enter your Name: ";
    cin >> userName;
    return userName;
}
void menu()
{   
    srand(time(NULL));
    string userName = getUserName();
    cout << "Hi " << userName << " !! Welcome to the world of fun!!" << endl;
    int choice; 
    do 
    {
        cout << "Select the Game you wish to play" << endl;
        cout << "1. Guessing Game" << endl;
        cout << "2. Snake" << endl;
        cout << "3. Sukoband" << endl;
        cout << "4. Puzzle" << endl;
        cin >> choice;

        switch(choice)
        {
            case 0:
                cout << "Thanks for playing!!!";
                break;
            case 1:
                guessingGame();
                break;
            case 2:
                //snake();
                break;
            case 3:
                //sukobank();
                break;
            case 4:
                //puzzle();
                break;           
        }
    }
    while(choice != 0);
}

void guessingGame()
{
    int maxValue = rangeUser();
    int random = rand() % maxValue + 1;
    cout << random << endl;
    checkGuess(random, userGuess());
}

int rangeUser() 
{
    cout << "Enter the range: ";
    int range;
    cin >> range;
    return range;
}
int userGuess()
{
    cout << "Guess a number: ";
    int guess;
    cin >> guess;
    return guess;
}
void checkGuess(int random, int guess)
{   
    for(int i = 3; i > 0; i--)
    { 
        if(guess == random){
            cout << "You win!!" << endl;
            break;
        }
        else if (guess < random){
            cout << "Too Low!!!" << endl;
        }
        else {
            cout << "Too High!!" << endl;
        }
        cout << "You are left with " << i << " attempts";
    }

}