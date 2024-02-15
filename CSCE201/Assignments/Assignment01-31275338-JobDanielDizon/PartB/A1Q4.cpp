#include <iostream>

using namespace std;

int main(){
    int array[10],
        freq = 10,
        i, j, k;

    cout << "Enter a 10 numbers in between (10 - 100): " << endl;
    //inputs 10 numbers in array and validates the numbers
    for(i = 0; i < 10; i++){
        cin >> array[i];
        if (array[i] < 10 || array[i] > 100){
            cout << "Invalid number, enter integer between 10-100" << endl;
        }
        
    }
    for(i = 0; i < 10; i++){
        for(j = i + 1; j < 10; j++){
            if(array[i] == array[j]){
                for(k = j; k < freq - 1; k++){
                    array[k] = array[k + 1];
                }
                freq--;
                j--;
            }
        }
    }
    cout << "Numbers without duplicates: ";
    for(i = 0; i < 10; i++){
        cout << array[i] << " ";
    }
    return 0;
}
