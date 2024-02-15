#include <iostream>
using namespace std;

class Employee{
    public:
        Employee(string first, string last){
            firstname = first;
            lastname = last;
        };
        string getFirstName(){
            return firstname;
        };
        string getLastName(){
            return lastname;
        };
        virtual float salary(){
            return 0;
        };
        virtual void print(){
        };
    private:
        string firstname, lastname;
};

class HourlyWorker: public Employee{
    public:
        HourlyWorker(string f, string l): Employee(f, l){
        };
        void setWage(float w){
            wage = w;
        };
        void setHour(float h){
            hour = h;
        };
        float salary(){
            return wage * hour;
        };
        void print(){
            cout << getFirstName() << " " << getLastName() << endl;
        };
    private:
        float wage, hour;
};

int main(){
    HourlyWorker worker("Job Daniel", "Dizon");
    worker.setWage(16.0);
    worker.setHour(40.0);

    worker.print();
    cout << "Salary of worker: " << worker.salary();
}