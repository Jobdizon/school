#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int students = 3, subjects = 4,
        max, min;
    int array[3][4] = {{78, 60, 79, 88},
                       {85, 80, 77, 91},
                       {89, 78, 81, 75}};
    int i, j;
    
    //table 1 output
    cout << "\t\tsubject[0]\tsubject[1]\tsubject[2]\tsubject[3]" << endl;
    cout << "student[0]\t" << array[0][0] << "\t\t" << array[0][1] << "\t\t" << array[0][2] << "\t\t" << array[0][3] << endl;
    cout << "student[1]\t" << array[1][0] << "\t\t" << array[1][1] << "\t\t" << array[1][2] << "\t\t" << array[1][3] << endl;
    cout << "student[2]\t" << array[2][0] << "\t\t" << array[2][1] << "\t\t" << array[2][2] << "\t\t" << array[2][3] << endl;
    
    for (i = 0; i < students; i++){
        for(j = 0; j < subjects; j++){
            if (array[i][j] < min){
                min = array[i][j];
            }
            if (array[i][j] > max){
                max = array[i][j];
            }
        }
    }
    cout << "Lowest mark: " << min << endl;
    cout << "Highest mark: " << max << endl;
    for(i = 0; i < students; i++){
        int total = 0;
        for( j = 0; j < subjects; j++){
            total += array[i][j];
        }
        double student_avg = static_cast<double>(total) / 4;
        cout << "The average mark for student " << i << " is " << student_avg << endl;
    }
    return 0;
}