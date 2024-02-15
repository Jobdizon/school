#pragma once
#include <string>

class zipCode
{
	int zip;
	std::string bar;
	int Value[5] = {7, 4, 2, 1, 0};
	std::string barCode[10] = {"11000", "00011", "00101", "00110", "01001", "01010", "01100", "10001", "10010", "10100"};
private:
    void zipConversion();
    void barConversion();
public:
	zipCode(int zip);
	zipCode(const std::string& bar);
	int getZip();
	std::string getBar();
};
    



