#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    ofstream outputFile;
    string input;

    outputFile.open("customer.txt");

    cout << "Enter the account number, customer's name and balance.\nEnter EOF to end input." << endl;
    
    while(getline(cin, input)){
        outputFile << input << endl;
    }
    outputFile.close();
    return 0;
}