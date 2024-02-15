/*Write a C++ program to calculate the average age of a class of ten students. Prompt the user to
enter the age of each student.*/
#include <iostream>

using namespace std;

int main(){
    int age, totalAge = 0;
    cout << "Enter the age of each student: " << endl;
    
    for (int i = 1; i <= 10; i++) 
    {
        cin >> age;
        totalAge += age;
    }
    
    cout << "Average age in the class: " << static_cast<double>(totalAge / 10.0) << endl;
    return 0;
}