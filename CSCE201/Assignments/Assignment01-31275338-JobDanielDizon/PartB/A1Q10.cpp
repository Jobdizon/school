#include <iostream>
#include <fstream>

using namespace std;

int main(){
    double sum = 0.0, max = 0.0, min = 100.0,
           num, avg = 0.0;
    ifstream inputfile;
    inputfile.open("student.txt");
    while(inputfile >> num){
        cout << num << endl;
        sum += num;
        if(num > max){
            max = num;
        }
        if (num < max){ //85 is not the lowest value, I am not sure 
            min = num;  //where the bug is. 
        }   
    }
    avg = sum / 20.0;
    cout << "Average marks: " <<  avg << endl;
    cout << "Highest marks: " << max << endl;
    cout << "Lowest marks: " << min << endl;
    
    ofstream outputfile;
    outputfile.open("studentstatistics.txt");
    outputfile << "Average marks: " <<  avg << endl;
    outputfile << "Highest marks: " << max << endl;
    outputfile << "Lowest marks: " << min << endl;
    return 0;
}
    
    
    