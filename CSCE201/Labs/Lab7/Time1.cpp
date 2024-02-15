// Declaration of Time class.
#ifndef TIME1_H
#define TIME1_H

class Time {
    public:
        Time(int = 0, int = 0, int = 0); // default constructor
        void setTime(int, int, int); // set hour, minute, second
        void printMilitary(); // print military time format
        void printStandard(); // print standard time format
    private:
        int hour; // hour from 0 to 23
        int minute; // minute from 0 to 59
        int second; // second from 0 to 59
};
#endif