#include <iostream>
using namespace std;

int main(){
    int num = 1; 
    try{
        if(num == 1)
            throw 10;
        else if(num == 2)
            throw 'A';
        else if (num == 3)
            throw 0.5;
    }
    catch(int n){
        cout << "Integer exception caught";
    }
    catch(char c){
        cout << "Character exception caught";
    }
    catch(double f){
        cout << "Floating-point exception caught";
    }
    cout << "\nEnd of program. ";

    return 0;
}    

