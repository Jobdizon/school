#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    srand(time(NULL));
    int num = (rand() % 1000) + 1, guess;
    
    cout << "I have number between 1 and 1000.\nCan you guess my number?\nPlease type your first guess.\n";
     
    do{ 
        cin >> guess;
        if(guess > num){
            cout << "Too high. Try again.\n";
        }
        if(guess < num){
            cout << "Too low. Try again.\n";
        }
        if(guess == num){
            cout << "Excellent! You guessed the number!\nWould you like to play again (y or n)?\n";
            char choice;
            cin >> choice;
            if(choice == 'n'){
                break;
            }
            if(choice == 'y'){
                continue;
            }
        }
    }while(guess != 'y');
    
    return 0;
}