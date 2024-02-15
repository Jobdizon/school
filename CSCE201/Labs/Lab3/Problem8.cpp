#include <iostream>
using namespace std;

int main(){
    int size;

    cout << "Enter size of side square between 1 and 20: " << endl;
    cin >> size;
    
    for(int i = 1; i <= size; i++){
        cout << "* ";
        }
        cout << endl;
    
    for(int j = 1; j <= size; j++){
        cout << "* ";
        for(int k = 1; k <= size - 2; k++){ //spaces in between the hollow squares
            cout << "  ";
        }
            cout << "* " << endl;
        }
    
    for(int l = 1; l <= size; l++){
        cout << "* ";
        }
        cout << endl;
    return 0;   
    }
