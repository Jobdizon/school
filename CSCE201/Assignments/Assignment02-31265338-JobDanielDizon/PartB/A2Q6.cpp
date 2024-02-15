#include <iostream>
#include <string>

using namespace std;

int main(){
    char string1[20], string2[20];

    cout << "Enter string 1: ";
    cin.getline(string1, 20); //stores input into string1 array
    cout << "Enter string 2: ";
    cin.getline(string2, 20);//stores input into string2 array
    
    string strings1 = string(string1), strings2 = string(string2),
           concat = strings1 + strings2;
    
    cout << "String 1 concatenates with string 2 is ";
    cout << concat;

    return 0;
}