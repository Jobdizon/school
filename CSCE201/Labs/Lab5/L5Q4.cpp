#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int array[5][5],
        *ptr = &array[0][0],
        i, j, k;

    for(i = 0; i < 5; i ++){
        for(j = 0; j < 5; j++){
            array[i][j] = i + j;
        }
    }
    for(i = 0; i < 25; i++){
        if(i % j == 0){
            cout << endl;
        } 
        cout << "p[" << i << "] = " << *(ptr + i) << " ";   
    }  
    return 0;    
}
