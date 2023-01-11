#include<windows.h>
#include <GL/glut.h>

void init(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);	// Set display window colour to white

    glMatrixMode(GL_PROJECTION);		// Set projection parameters
    gluOrtho2D(0.0, 800.0, 0.0, 800.0);
}

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);	// Clear display window

    bool f = false;

    for (int x = 0;x <= 800;x += 100) {

        for (int y = 0;y <= 800;y += 100) {

            if (f) {

                glColor3f(1.0, 1.0, 1.0);
                f = !f;

            }
            else {

                glColor3f(0.0, 0.0, 0.0);
                f = !f;

            }
            glBegin(GL_QUADS);
            glVertex2i(x, y);
            glVertex2i(x, y + 100);
            glVertex2i(x + 100, y + 100);
            glVertex2i(x + 100, y);

            glEnd();

            glFlush();	// Process all OpenGL routines
        }
    }

}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);						// Initalise GLUT
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);	// Set display mode

    glutInitWindowPosition(300, 50);				// Set window position
    glutInitWindowSize(700, 700);					// Set window size
    glutCreateWindow("chess-board");	// Create display window

    init();							// Execute initialisation procedure
    glutDisplayFunc(display);		// Send graphics to display window
    glutMainLoop();					// Display everything and wait

    return 0;
}
