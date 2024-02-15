#include <iostream>

using namespace std;

int main(){
    int array[5];
    int *ptr;

    ptr = &array[0];

    cout << "Enter 5 integer values: " << endl;
    
    for(int i = 0; i < 5; i++){//stores the five integers in array
        cin >> ptr[i];
    }

    for(int i = 4; i >= 0; i--){
        cout << array[i] << " ";
    }
    return 0;
}