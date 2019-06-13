#include <GL/gl.h>
#include <GL/glut.h>

void display(void){
	glClear (GL_COLOR_BUFFER_BIT);
	glColor3f (1.0, 1.0, 1.0);
//	glBegin(GL_LINE_LOOP);
//		glVertex2i(50, 75);
//		glVertex2i(150, 75);
//		glVertex2i(175, 150);
//		glVertex2i(100, 200);
//		glVertex2i(25, 150);
//	glEnd();
//	
//	glBegin(GL_POLYGON);
//		glVertex2i(250, 75);
//		glVertex2i(350, 75);
//		glVertex2i(375, 150);
//		glVertex2i(300, 200);
//		glVertex2i(225, 150);
//	glEnd();

	glBegin(GL_TRIANGLE_STRIP);
		glVertex3f(0.25, 0.25, 0.0);
		glVertex3f(0.75, 0.25, 0.0);
		glVertex3f(0.75, 0.75, 0.0);
		glVertex3f(0.25, 0.75, 0.0);
	glEnd();

//	glBegin(GL_LINE_LOOP);
//		glVertex3f(0.25, 0.25, 0.0);
//		glVertex3f(0.75, 0.75, 0.0);
//		glVertex3f(0.25, 0.75, 0.0);
//	glEnd();
//	
//	glBegin(GL_LINE_LOOP);
//		glVertex3f(0.25, 0.25, 0.0);
//		glVertex3f(0.75, 0.25, 0.0);
//		glVertex3f(0.75, 0.75, 0.0);
//	glEnd();
	
	glFlush ();
}
void init (void) {
	glClearColor (0.0, 0.0, 0.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	//glOrtho(0.0, 800.0, 0.0, 400.0, -1.0, 1.0);
	glOrtho(-1, 1, -1, 1, -1.0, 1.0);
}
int main(int argc, char** argv){
	glutInit(&argc, argv);
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
	//glutInitWindowSize (600, 300);
	glutInitWindowSize (600, 600);
	glutInitWindowPosition (100, 100);
	glutCreateWindow ("demo");
	init ();
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
