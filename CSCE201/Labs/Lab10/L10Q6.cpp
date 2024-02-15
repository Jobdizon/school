#include <iostream>
#include <typeinfo>
using namespace std;

double average(double a, double b){
    return (a + b)/2;
}
int main(){
    char a = 'A' ; // should not use char variable
    int b = 2; // should not use int variable
    double result;
    
    // Insert exception handling code here
    try{
        if(typeid(a).name()[0] == 'c')
            throw 'c';
        if(typeid(b).name()[0] == 'i')
            throw 0;
        
        result = average(a, b);// passing char or int variables as
                        // arguments to the function
                        // that accepts double parameters
        cout << "\nAverage is " << result << endl;
    }
    catch(const char c){
        cout << "Exception: cannot use char type\n";
    }
    catch(const int i){
        cout << "Exception: cannot use int type\n";
    }
    
    return 0;
}