#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

int Even(int num);

int main() {
    char str[100];
    cout << "Enter a series of integers: ";
    cin.getline(str, 100);

    char *token = strtok(str, " ");
    while (token != NULL) {
        int num = strtol(token, NULL, 10);
        if (Even(num)) {
            cout << "Integer " << num << " is an even integer." << endl;
        } else {
            cout << "Integer " << num << " is not an even integer." << endl;
        }
        token = strtok(NULL, " ");
    }
}

int Even(int num) {
    return num % 2 == 0;
}