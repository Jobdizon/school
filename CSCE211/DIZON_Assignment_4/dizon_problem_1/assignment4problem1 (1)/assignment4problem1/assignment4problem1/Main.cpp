#include "gl/glut.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <thread>
#include <chrono>
#include "Shape.h"

// Function prototypes
std::chrono::milliseconds delayTime(5); // Controls frame rate
void init();
void display();
void updateShapes();

// Globals
const int WIDTH = 720;
const int HEIGHT = 480;
static int screenx = 0;
static int screeny = 0;

Shape* shapes[10]; // Array of pointers to 5 shapes

int main(int argc, char** argv) {
    srand(time(NULL));
    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_MULTISAMPLE | GLUT_DEPTH);
    glutInitWindowSize(WIDTH, HEIGHT);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("Bouncing Objects");

    init();
    glutDisplayFunc(display);
    glutIdleFunc(updateShapes);
    display();
    glutMainLoop();

    return 0;
}

void init() {
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glColor3f(0.0, 0.0, 0.0);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    gluOrtho2D(screenx, screenx + WIDTH, screeny + HEIGHT, screeny);

    shapes[0] = new Circle(50);
    shapes[1] = new Square(30);
    shapes[2] = new Square(70);
    shapes[3] = new MultiColorCircle(50);
    shapes[4] = new MultiColorCircle(100);
    shapes[5] = new Circle(50);
    shapes[6] = new Square(30);
    shapes[7] = new Square(70);
    shapes[8] = new MultiColorCircle(50);
    shapes[9] = new MultiColorCircle(100);
}

void updateShapes() {
    for (int i = 0; i < 10; i++)
        shapes[i]->updateCoordinates();
    display();
    std::this_thread::sleep_for(delayTime);
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    for (int i = 0; i < 10; i++)
        shapes[i]->draw();

    glutSwapBuffers();
    glFlush();
    return;
}