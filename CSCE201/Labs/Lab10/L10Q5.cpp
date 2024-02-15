#include <iostream>
using namespace std;

class MyException {
    public:
        MyException() {message = "Error!";}
        const char * print() const {return message;}
    private:
        const char *message;
};

double divide(double a, double b){
    if(b == 0)
        throw 0;
    return a / b;
}

int main(){
    MyException error;

    try{
        float f1, f2;
        f1 = 3; f2 = 0;

        divide(f1, f2);
    }
    catch(int exception){
        cout << error.print(); 
    }

    cout << "\nEnd of program";

    return 0;
}
