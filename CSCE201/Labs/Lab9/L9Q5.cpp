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

class Cylinder : public Circle {
    public:
    // default constructor
        Cylinder(double h=0.0, double r = 0.0);
        void setHeight(double); // set height
        double getHeight() const; // get height
        virtual double area(); // calculate area of cylinder
        virtual double volume();// calculate volume of cylinder
        virtual void printShapeName() const {cout << "Cylinder\n";}
        virtual void print() const; // print the height of cylinder
    private:
        double height; // height of cylinder
};
