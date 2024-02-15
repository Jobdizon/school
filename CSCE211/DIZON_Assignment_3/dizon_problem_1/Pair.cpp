#include "Pair.h"

Pair::Pair() : num1(0), num2(0){
}
Pair::Pair(int num1, int num2) : num1(num1), num2(num2){
}
int Pair::get1(){
    return num1;
}
int Pair::get2(){
    return num2;
}
Pair operator+(const Pair& n1, const Pair& n2) 
{
    Pair newPair(n1.num1, n1.num2);
    newPair.num1 += n2.num1;
    newPair.num2 += n2.num2;
    return newPair;
}
Pair operator+(int otherNum, const Pair& n1) {
    Pair newPair(n1.num1, n1.num2);
    newPair.num1 += otherNum;
    newPair.num2 += otherNum;
    return newPair;
}
Pair operator+(const Pair& n1, int otherNum) 
{
    Pair newPair(n1.num1, n1.num2);
    newPair.num1 += otherNum;
    newPair.num2 += otherNum;
    return newPair;
}
