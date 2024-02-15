#include <iostream>
using namespace std;

double largest(double *p, int n);
double smallest(double a[], int n);

int main(){
    const int SIZE = 10;
    double num[SIZE] = {12.3, 13.5, 43.1, 28.8, 9.5, 38.0, 49.1, 53.2, 1.9, 23.6};
    double large, small;
    
    large = largest(num, SIZE);
    cout << "The largest number is " << large << ".\n";
    small = smallest(num, SIZE);
    cout << "The smallest number is " << small << ".\n";
    
    return 0;
}

double largest(double *p, int n){
    int max = *p;
    for(int i = 1; i < n; i ++){
        if(*(p + i) > max){
            max = *(p + i);
        }
    }
    return max;
}

double smallest(double a[], int n){
    double min = a[0];
    for(int i = 1; i < n; i++){
        if(a[i] < min){
            min = a[i];
        }
    }
    return min;
}