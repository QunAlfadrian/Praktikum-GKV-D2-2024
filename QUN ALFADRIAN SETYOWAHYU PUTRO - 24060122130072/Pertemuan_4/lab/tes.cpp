//#include <math.h>
//#include <GL/glut.h>
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//float angle=0.0, deltaAngle = 0.0, ratio;
//float x=0.0f,y=1.75f,z=15.0f; // posisi awal kamera
//float lx=0.0f,ly=0.0f,lz=-1.0f;
//int deltaMove = 0,h,w;
//int bitmapHeight=12;
//
//void Reshape(int w1, int h1) {
//	// Fungsi reshape
//	if(h1 == 0) h1 = 1;
//	w = w1;
//	h = h1;
//	ratio = 1.0f * w / h;
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//	glViewport(0, 0, w, h);
//	gluPerspective(45,ratio,0.1,1000);
//	glMatrixMode(GL_MODELVIEW);
//	glLoadIdentity();
//	gluLookAt(
//	x, y, z,
//	x + lx,y + ly,z + lz,
//	0.0f,1.0f,0.0f);
//}
//
//void lighting(void) {
//	static GLfloat LightPos[] = {0.0, 0.0, 0.0, 1.0};
//	
//	
//	glEnable(GL_DEPTH_TEST);
//	glEnable(GL_LIGHTING);
//	glEnable(GL_LIGHT0);
//	glLightfv(GL_LIGHT0, GL_POSITION, LightPos);
//}
//
//void display(void) {
//	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//	
//	glPushMatrix();
//		glRotatef(-45, 0, 1, 0);
//		glPushMatrix();
//			glTranslatef(0,2,0);
//			glColor3f(1.0, 0.0, 0.0);
//			glBegin(GL_QUADS);
//				glVertex3f(-3.0f,-3.0f,0.0f);
//				glVertex3f(3.0f,-3.0f,0.0f);
//				glVertex3f(3.0f,3.0f,0.0f);
//				glVertex3f(-3.0f,3.0f,0.0f);
//			glEnd();
//		glPopMatrix();
//		glPushMatrix();
//			glTranslatef(3.0, 0.0, 0.0);
//			glRotatef(90, 0, 1, 0);
//			glTranslatef(-3.0, 0.0, 0.0);
//			glTranslatef(0.0, 2.0, 0.0);
//			glBegin(GL_QUADS);
//				glVertex3f(-3.0f,-3.0f,0.0f);
//				glVertex3f(3.0f,-3.0f,0.0f);
//				glVertex3f(3.0f,3.0f,0.0f);
//				glVertex3f(-3.0f,3.0f,0.0f);
//			glEnd();	
//		glPopMatrix();
//	glPopMatrix();
//	
//	glutSwapBuffers();
//	glFlush();
//}
//
//void init(void) {
//	glEnable (GL_DEPTH_TEST);
//	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
//}
//
//int main(int argc, char **argv) {
//	glutInit(&argc, argv);
//	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
//	glutInitWindowPosition(100,100);
//	glutInitWindowSize(640,480);
//	glutCreateWindow("3D Lighting");
//	glutIgnoreKeyRepeat(1); // Mengabaikan key repeat (saat tombol keyboard dipencet terus)
////	glutSpecialFunc(pressKey);
////	glutSpecialUpFunc(releaseKey);
//	glutDisplayFunc(display);
//	glutIdleFunc(display); // Fungsi display-nya dipanggil terus-menerus
//	glutReshapeFunc(Reshape);
//	lighting();
//	init();
//	glutMainLoop();
//	return(0);
//}
