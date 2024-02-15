#include <iostream>
#include <cstring>
using namespace std;

int main(){ //Problem: not sure how to output word length without a static number
    char str[100];
    char delim[] = " ,.!"; 
    char *token;
    int counter[5] = {0}; 

    cout << "Enter a string: ";
    cin.getline(str, 100);

    token = strtok(str, delim);
    
    while (token != NULL) {
        int len = strlen(token);
        counter[len]++;
        token = strtok(NULL, delim); 
    }

    cout << "Word length\tOccurences\n";
    for(int i = 1; i < sizeof(counter) / sizeof(counter[0]); i++){
        cout << i << "\t\t" << counter[i] << endl;
    } 
    return 0; 
}