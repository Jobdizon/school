#pragma once
class Pair
{
    private:       
        int num1, num2;
    public:
        Pair();
        Pair(int num1, int num2);
        int get1();
        int get2();
        friend Pair operator+(const Pair& n1, const Pair& n2);
        friend Pair operator+(int otherNum, const Pair& n1);
        friend Pair operator+(const Pair& n1, int otherNum);
};