#include <iostream>
using namespace std;

class Rectangle{
    private:
        float length, width;
    public:
        Rectangle(float len = 1, float wid = 1);
        void setLength(float len){
            if(len > 0.0 && len < 20.0){
                length = len;
            }
        }   
        float getLength(){
            return length;
        }
        void setWidth(float wid){
            if(wid > 0.0 && wid < 20.0){
                width = wid;
            }
        }
        float getWidth(){
            return width;
        }
        float getPerimeter(){
            float p = 2 * (length + width);
            return p;
        }
        float getArea(){
            float a = length * width;
            return a;
        }
        
};

int main(){
    Rectangle myObj;

    myObj.setLength(2);
    myObj.setWidth(2);
    cout << myObj.getPerimeter() << endl;
    cout << myObj.getArea() << endl;

    return 0;
}