#include <iostream>

using namespace std;

int main(){
    int del, length, array[50] = {0}, index = 0;
    
    cout << "How many elements in Array? ";
    cin >> length;
    cout << "Enter elements of array " << endl;

    for(int i = 0; i < length; i++){
        cin >> array[i];
    }
    
    cout << "Enter element to delete: ";
    cin >> del;

    for(int i = 0; i < length; i++){
        if (array[i] == del){
            index = i;
            break;
        }
    }

    if (index != 0){
        for(int i = index; i < length - 1; i++){
            array[i] = array[i + 1];
        }
        length--;
    }

    cout << "New Array is: ";
    for (int i = 0; i < length; i++){
        cout << array[i] << " ";
    }
    return 0;
}