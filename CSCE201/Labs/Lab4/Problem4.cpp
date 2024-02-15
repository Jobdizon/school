#include <iostream>

using namespace std;

int main(){
    int length, count, array[50], freq[50];

    cout << "How many elements? ";
    cin >> length;
    cout << "Enter elements of array" << endl;
    for (int i = 0; i < length; i++) {
        cin >> array[i];
        freq[i] = -1;
    }
    cout << endl;

    for (int i = 0; i < length; i++) {
        count = 1;
        for (int j = i + 1; j < length; j++) {
            if (array[i] == array[j]) {
                count++;
                freq[j] = 0;
            }
        }
        if (freq[i] != 0) {
            freq[i] = count;
        }
    }

    for (int i = 0; i < length; i++) {
        if (freq[i] != 0) {
            cout << array[i] << " ";
        }
    }
    return 0;
}