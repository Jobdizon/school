#include <iostream>

using namespace std;

int main(){
    int array[6][6];
    int i, j;

    for(i = 0; i < 6; i++){
        for(j = 0; j < 6; j++){
            array[i][j] = i + j;
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}