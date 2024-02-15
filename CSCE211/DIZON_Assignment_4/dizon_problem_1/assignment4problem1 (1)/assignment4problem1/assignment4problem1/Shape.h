#pragma once

class Shape
{
protected:
    static const int WIDTH = 720;
    static const int HEIGHT = 480;
    float x;
    float y;
    float deltaX;
    float deltaY;
public:
    Shape();
    virtual ~Shape();
    virtual void draw() = 0;
    void updateCoordinates();
};

class Square : public Shape
{
private:
    int diameter;
public:
    Square(int value);
    ~Square();
    void draw() override;
};

class Circle : public Shape
{
private:
    int radius;
public:
    Circle(int value);
    ~Circle();
    void draw() override;
};

class MultiColorCircle : public Shape
{
private:
    int radius;
public:
    MultiColorCircle(int value);
    ~MultiColorCircle();
    void draw() override;
};