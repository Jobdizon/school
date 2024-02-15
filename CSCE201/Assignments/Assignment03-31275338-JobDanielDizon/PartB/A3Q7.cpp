#include <iostream>
#include <cmath> 
using namespace std;

double mean(double *p, int n); 
double stddev(double m[], int n, double avg); 

int main(){
    const int SIZE = 10;
    double marks[SIZE] = {85.0, 79.5, 81.0, 77.5, 78.0, 70.0, 72.5, 85.5, 90.5, 73.0};
    double *ptr = marks;
    double average, standdev;
    
    average = mean(ptr, SIZE);
    cout << "Mean = " << average << ".\n";
    
    standdev = stddev(ptr, SIZE, average);
    cout << "Standard deviation = " << standdev << ".\n";
    
    return 0;
}

double mean(double *p, int n){
    double total = 0.0;
    for(int i = 0; i < n; i++){
        total += *(p + i);
    }
    return total / n;
}

double stddev(double m[], int n, double avg){
    double total = 0.0;
    for(int i = 0; i < n; i++){
        total += pow(m[i] - avg, 2);
    }
    return sqrt(total / n);
}