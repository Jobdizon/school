#include <iostream>

using namespace std;

int main(){
    int size2[2] = {0, 1},
        size3[3] = {0, 1, 2},
        size5[5] = {0, 1, 2, 3, 4};
    int* sizes[] = {size2, size3, size5},
        array[] = {2, 3, 5};

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < array[i]; j++){
            cout << "arr[" << i << "]" << "[" << j << "] = ";
            cout << sizes[i][j] << " ";
        }
        cout << endl;
    }
}