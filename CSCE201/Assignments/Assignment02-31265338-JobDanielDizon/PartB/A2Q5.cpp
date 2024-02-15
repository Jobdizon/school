/*Write a program to accept less than 20 characters from keyboard. Then, count 
the number of characters entered (not including the terminating character ‘\0’). 
Print the output on screen.*/
#include <iostream>

using namespace std;

int main(){    
    char arr[20];
    int length = 0;

    cout << "Enter a word that has less than 20 characters (no spaces): ";
    cin.getline(arr, 20);
    
    for(int i = 0; arr[i] != '\0'; i++){
        length++;
    }
    cout << "The number of characters in " << arr << " is " << length;
}