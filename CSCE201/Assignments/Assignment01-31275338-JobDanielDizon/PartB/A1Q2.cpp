#include <iostream>

using namespace std;

int main(){
    int data[10], num, i, index;
    
    cout << "Enter a 10 integer array: " << endl;
    for (i = 0; i < 10; i++){
        cin >> data[i];
    }
    
    cout << "Enter integer: ";
    cin >> num;

    for(i = 0; i < 10; i++){
        if(data[i] == num){
            index = i;
            cout << "Integer value found in index element " << index;
            break;
        }
        if (data[i] != num){
            cout << "Integer value not found";
            break;
        }
    }
    return 0;   
}