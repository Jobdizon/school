#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    ifstream inputfile;
    string input;
    
    inputfile.open("customer.txt");

    cout << input << endl;
    
    inputfile.close();
    return 0;
}