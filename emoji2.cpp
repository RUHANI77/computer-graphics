#include <GL/gl.h>
#include<stdio.h>
#include<math.h>
#include <GL/glut.h>

void circle(GLfloat rx, GLfloat ry, GLfloat cx, GLfloat cy)
{
    glBegin(GL_POLYGON);
    glVertex2f(cx, cy);
    for (int i = 0; i <= 360; i++)
    {
        float angle = i * 3.1416 / 180;
        float x = rx * cos(angle);
        float y = ry * sin(angle);
        glVertex2f((x + cx), (y + cy));
    }
    glEnd();
}

float shift = 100; // a variable used to move the boat right and left
float a = 100; // variable for up down movement

void init(void)
{
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0, 500, 0.0, 500); // window size
}

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

    //circle design
    glColor3ub(255, 215, 0);
    circle(35, 45, 250, 350);

    // right eyes
    glColor3ub(255, 255, 255);
    circle(10, 15, 265, 360);

    glColor3ub(0, 128, 0);
    circle(7, 12, 262, 360);

    glColor3ub(0, 0, 0);
    circle(5, 9, 260, 360);

    glColor3ub(255, 255, 255);
    circle(2, 3, 260, 360);

    // left eyes
    glColor3ub(255, 255, 255);
    circle(10, 15, 235, 360);

    glColor3ub(0, 128, 0);
    circle(7, 12, 238, 360);

    glColor3ub(0, 0, 0);
    circle(5, 9, 240, 360);

    glColor3ub(255, 255, 255);
    circle(2, 3, 240, 360);

    // mouth
    glColor3ub(0, 0, 0);
    circle(7, 10, 250, 333);

    glColor3ub(255, 215, 0);
    circle(7, 10, 250, 330);

    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1000, 600);
    glutInitWindowPosition(300, 50);
    glutCreateWindow("emoji drawing");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}