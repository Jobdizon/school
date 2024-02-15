#include <iostream>

using namespace std;

int main(){
    int element = 0, i, j, integers[5] = {0};

    for(i = 0; i < 5; i++){
        cin >> integers[i];
    }
    
    cout << "Element\tValue\tHistogram" << endl;
    for(i = 0; i < 5; i++){
        cout << i << "\t";
        cout << integers[i] << "\t";
        for(j = 0; j < integers[i]; j++){
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}