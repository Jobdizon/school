#include <iostream>
using namespace std;

class Shape {
    public:
        virtual double area() const { return 0.0; }
        virtual double volume() const { return 0.0; }
        virtual void printShapeName() const { cout << "Shape\n "; }
        virtual void print() const { cout << "Shape not declared ";}
};

class Circle: public Shape{
    public:
        Circle(float r){
            radius = r;
        };
        void setRadius(){
            if(radius > 0){
                radius = radius;
            }
        };
        float getRadius(){
            return radius;
        };
        double area(){
            return 3.14 * (getRadius() * getRadius());
        };
        void printShapeName(){
            cout << "Circle\n";
        };
        void print(){
             cout << "Radius of Circle: " << getRadius() << endl;
        };
    private:
        float radius;
};

int main(){
    Circle cir(2.0);
    cir.printShapeName();
    cir.print();
    cout << "Area of Circle: " << cir.area();

    return 0;
}