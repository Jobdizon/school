#include <iostream>

using namespace std;

int main(){
    char array[5];
    char *ptr;

    ptr = &array[0];

    cout << "Enter 5 character values: " << endl;
    
    for(int i = 0; i < 5; i++){//stores the five integers in array
        cin >> ptr[i];
    }

    for(int i = 4; i >= 0; i--){
        cout << array[i] << " ";
    }
    return 0;
}
