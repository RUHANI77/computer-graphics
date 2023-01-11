#include<windows.h>
#include <GL/glut.h>

void init(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);	// Set display window colour to white

    glMatrixMode(GL_PROJECTION);		// Set projection parameters
    gluOrtho2D(0.0, 300.0, 0.0, 300.0);
}

void drawShapes(void)
{
    glClear(GL_COLOR_BUFFER_BIT);	// Clear display window


    glColor3f(0.0, 1.0, 0.0);


    // Draw an triangle(House roof)
    glBegin(GL_TRIANGLES);

    glVertex2i(80, 150);

    glVertex2i(162, 220);

    glVertex2i(245, 150);

    glEnd();

    // Main Body
    glColor3f(1.0, 1.0, 1.0);

    // Draw an rectangle
    glBegin(GL_POLYGON);

    glVertex2i(100, 50);
    glVertex2i(225, 50);

    glVertex2i(225, 125);
    glVertex2i(100, 125);

    glVertex2i(225, 50);
    glVertex2i(225, 150);

    glVertex2i(100, 150);
    glVertex2i(100, 50);


    glEnd();

    glColor3f(1.0, 1.0, 0.0);

    // Draw an rectangle
    glBegin(GL_POLYGON);

    glVertex2i(150, 50);
    glVertex2i(175, 50);

    glVertex2i(175, 50);
    glVertex2i(175, 125);

    glVertex2i(175, 125);
    glVertex2i(150, 125);

    glVertex2i(150, 125);
    glVertex2i(150, 50);


    glEnd();

    glColor3f(1.0, 0.0, 0.0);

    // Draw an rectangle
    glBegin(GL_POLYGON);

    glVertex2i(115, 90);
    glVertex2i(140, 90);

    glVertex2i(140, 90);
    glVertex2i(140, 125);

    glVertex2i(140, 125);
    glVertex2i(115, 125);

    glVertex2i(115, 125);
    glVertex2i(115, 90);


    glEnd();

    glColor3f(1.0, 0.0, 0.0);

    // Draw an rectangle
    glBegin(GL_POLYGON);

    glVertex2i(185, 90);
    glVertex2i(210, 90);

    glVertex2i(210, 90);
    glVertex2i(210, 125);

    glVertex2i(210, 125);
    glVertex2i(185, 125);

    glVertex2i(185, 125);
    glVertex2i(185, 90);


    glEnd();


    glFlush();	// Process all OpenGL routines
}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);						// Initalise GLUT
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);	// Set display mode

    glutInitWindowPosition(300, 50);				// Set window position
    glutInitWindowSize(1000, 600);					// Set window size
    glutCreateWindow("A House");	// Create display window

    init();							// Execute initialisation procedure
    glutDisplayFunc(drawShapes);		// Send graphics to display window
    glutMainLoop();					// Display everything and wait

    return 0;
}
