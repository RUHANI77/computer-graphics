#include<windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>

void init(void)
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    gluOrtho2D(-20, 20, -20, 20);
}

void circle(GLfloat rx, GLfloat ry, GLfloat cx, GLfloat cy) {
    glBegin(GL_TRIANGLE_FAN);

    glVertex2f(cx, cy);

    for (int i = 0; i <= 100; i++) {

        float angle = 2.0f * 3.1416f * i / 100;

        float x = rx * cosf(angle);
        float y = ry * sinf(angle);
        glVertex2f((x + cx), (y + cy));

    }

    glEnd();

}

void myDisplay()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 1.0, 0.0);

    circle(8, 8, 0, 0);

    glColor3f(0.0, 0.0, 0.0);

    circle(4, 4, 0, -1);

    glColor3f(1.0, 1.0, 0.0);

    circle(4, 4, 0, 0);

    glColor3f(0.0, 0.0, 0.0);

    circle(1, 1, -2, 3);

    glColor3f(0.0, 0.0, 0.0);

    circle(1, 1, 2, 3);

    glFlush();
}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);						// Initalise GLUT
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);	// Set display mode

    glutInitWindowPosition(50, 100);				// Set window position
    glutInitWindowSize(400, 300);					// Set window size
    glutCreateWindow("simple emoji");	// Create display window

    init();							// Execute initialisation procedure
    glutDisplayFunc(myDisplay);		// Send graphics to display window
    glutMainLoop();					// Display everything and wait

    return 0;
}
