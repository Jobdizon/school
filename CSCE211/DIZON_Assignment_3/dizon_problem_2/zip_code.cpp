#include "zip_code.h"
#include <iostream>
using namespace std;

zipCode::zipCode(int zip) : zip(zip), bar("") 
{  
    zipConversion();
}

zipCode::zipCode(const string& bar) : bar(bar) 
{
    barConversion();
}

int zipCode::getZip() 
{
    return zip;
}

string zipCode::getBar() 
{
    return bar;
}

void zipCode::zipConversion() 
{
    int temp = zip;
    while (temp != 0) {
        int num = temp % 10;
        bar = barCode[num] + bar;
        temp = temp / 10;
    }
}

void zipCode::barConversion() 
{
    int num = 0;
    zip = 0;
    for (int i = 1; i <= 25; i++) {
        num = num + (bar[i - 1] - '0') * Value[(i - 1) % 5];
        if (i % 5 == 0) {
            zip = zip * 10 + (num % 11);
            num = 0;
        }
    }
}
