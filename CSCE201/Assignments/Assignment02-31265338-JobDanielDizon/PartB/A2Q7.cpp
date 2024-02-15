#include <iostream>

using namespace std;

int main(){
    char string1[50];
    char *ptr = &string1[0];

    cout << "Enter a sentence: ";
    cin.getline(string1, 50);

    for(int i = 0; i < 50; i++){
        cout << *(ptr + i);
        if(*(ptr + i) == ' '){
            cout << endl;
        }
    }
    return 0;
}