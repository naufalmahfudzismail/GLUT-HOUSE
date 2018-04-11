#include <GL/glut.h>
void MyKotak(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1, 0, 0);
	glBegin(GL_QUADS);
	glVertex2f(-0.5, -0.5);
	glVertex2f(-0.5, 0.5);
	glVertex2f(0.5, 0.5);
	glVertex2f(0.5, -0.5);
	glEnd();
	glFlush();
}



int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutCreateWindow("Naufal Mahfudz I_4616010053");
	glutDisplayFunc(MyKotak);
	glutMainLoop();
	return 0;

}