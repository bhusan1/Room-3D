#include <GL/glut.h>
#include <math.h>
#include <iostream>
#include <string.h>
#include <GL/freeglut_ext.h>


#include "closet.h"
#include "window.h"
#include "fan.h"
#include "shelf.h"
#include "sofa.h"



#define M_PI 3.14159265
#define WINDOW_WIDTH 1000
#define WINDOW_HEIGHT 1000



using namespace std;

// camera angle
float angle = 0.0, yAngle = 0.0;

// vector for camera direction
float lx = 0.0f, ly = 0.0f, lz = -1.0f;

// camera positioning
float x = -5.0f, z = 18.0f;
float roll = 0.0f;

//variabes for mouse 
float halfWidth = (float)(WINDOW_WIDTH / 2.0);
float halfHeight = (float)(WINDOW_HEIGHT / 2.0);
float mouseX = 0.0f, mouseY = 0.0f;


//Fan
Fan f;


void render(void) {

	// clear buffer

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glLoadIdentity();

	// Setting up camera
	gluLookAt(x, 2.5f, z,
		x + lx, 2.5f + ly, z + lz,
		roll + 0.0f, 2.5f, 0.0f);

	// Drawing floor
	glColor3f(1.0f, 0.851f, 0.702f);
	glBegin(GL_QUADS);
	glVertex3f(-10.0f, 0.0f, -10.0f);
	glVertex3f(-10.0f, 0.0f, 10.0f);
	glVertex3f(10.0f, 0.0f, 10.0f);
	glVertex3f(10.0f, 0.0f, -10.0f);
	glEnd();

	//drawing wall
	glColor3f(0.9294f, 0.9216f, 0.8353f);
	glBegin(GL_QUADS);
	glVertex3f(-10.0f, 0.0f, -10.0f);
	glVertex3f(-10.0f, 7.0f, -10.0f);
	glVertex3f(10.0f, 7.0f, -10.0f);
	glVertex3f(10.0f, 0.0f, -10.0f);
	glEnd();

	//draw next wall
	glColor3f(0.9294f, 0.9216f, 0.8353f);
	glBegin(GL_QUADS);
	glVertex3f(-10.0f, 0.0f, -10.0f);
	glVertex3f(-10.0f, 7.0f, -10.0f);
	glVertex3f(-10.0f, 7.0f, 10.0f);
	glVertex3f(-10.0f, 0.0f, 10.0f);
	glEnd();

	//wall left of door
	glColor3f(0.9294f, 0.9216f, 0.8353f);
	glBegin(GL_QUADS);
	glVertex3f(-10.0f, 0.0f, 10.0f);
	glVertex3f(-10.0f, 7.0f, 10.0f);
	glVertex3f(-6.0f, 7.0f, 10.0f);
	glVertex3f(-6.0f, 0.0f, 10.0f);
	glEnd();
	
	
	//wall right of door
	glColor3f(0.9294f, 0.9216f, 0.8353f);
	glBegin(GL_QUADS);
	glVertex3f(-3.0f, 0.0f, 10.0f);
	glVertex3f(-3.0f, 7.0f, 10.0f);
	glVertex3f(10.0f, 7.0f, 10.0f);
	glVertex3f(10.0f, 0.0f, 10.0f);
	glEnd();

	//drawing door 
	glColor3f(1.0f, 0.851f, 0.702f);
	glBegin(GL_QUADS);
	glVertex3f(-6.0f, 7.0f, 10.0f);
	glVertex3f(-6.0f, 5.0f, 10.0f);
	glVertex3f(-3.0f, 5.0f, 10.0f);
	glVertex3f(-3.0f, 7.0f, 10.0f);
	glEnd();

	//border of door
	glColor3f(0.4f, 0.2f, 0.0f);
	glLineWidth(30.0f);
	glBegin(GL_LINES);
	glVertex3f(-6.0f, 5.0f, 10.01f);
	glVertex3f(-3.0f, 5.0f, 10.01f);
	glEnd();

	//border 
	glBegin(GL_LINES);
	glVertex3f(-6.0f, 5.0f, 10.01f);
	glVertex3f(-6.0f, 0.0f, 10.01f);
	glEnd();

	//border
	glBegin(GL_LINES);
	glVertex3f(-3.0f, 0.0f, 10.01f);
	glVertex3f(-3.0f, 5.0f, 10.01f);
	glEnd();


	//next wall
	glColor3f(0.9294f, 0.9216f, 0.8353f);
	glBegin(GL_QUADS);
	glVertex3f(10.0f, 0.0f, -10.0f);
	glVertex3f(10.0f, 7.0f, -10.0f);
	glVertex3f(10.0f, 7.0f, 10.0f);
	glVertex3f(10.0f, 0.0f, 10.0f);
	glEnd();

	//drawing ceiling
	glColor3f(0.95f, 0.95f, 0.95f);
	glBegin(GL_QUADS);
	glVertex3f(-10.0f, 7.0f, -10.0f);
	glVertex3f(10.0f, 7.0f, -10.0f);
	glVertex3f(10.0f, 7.0f, 10.0f);
	glVertex3f(-10.0f, 7.0f, 10.0f);
	glEnd();


	// Draw closet
	Closet closet;
	glPushMatrix();
	//glTranslatef(8.49f, 0.0f, -3.5f);
	glTranslatef(8.49f, 0.0f, -8.5f);
	//glRotatef(-90.0, 0.0, 1.0, 0.0);
	glRotatef(0.0, 0.0, 1.0, 0.0);
	closet.drawCloset();
	glPopMatrix();

	//draw sofa
	Sofa sofa;
	glPushMatrix();
	glTranslatef(-1.5f, 1.4f, -2.6f);
	glScalef(0.32f, 0.32f, 0.32f);
	glRotatef(-180.0, 0.0, 1.0, 0.0);
	sofa.drawSofa();
	glPopMatrix();

	// Draw TV
	//draw border
	glColor3f(0.139f, 0.139f, 0.139f);
	glBegin(GL_QUADS);
	glVertex3f(-3.0f, 2.0f, -9.99f);
	glVertex3f(-3.0f, 5.5f, -9.99f);
	glVertex3f(3.0f, 5.5f, -9.99f);
	glVertex3f(3.0f, 2.0f, -9.99f);
	glEnd();

	//draw body
	glColor3f(0.5f, 0.8f, 0.9f);
	glBegin(GL_QUADS);
	glVertex3f(-2.9f, 2.1f, -9.98f);
	glVertex3f(-2.9f, 5.4f, -9.98f);
	glVertex3f(2.9f, 5.4f, -9.98f);
	glVertex3f(2.9f, 2.1f, -9.98f);
	glEnd();

	//draws Floor 
	glColor3f(0.149f, 0.149f, 0.149f);
	glLineWidth(3.0f);
	for (int i = 0; i < 20; i += 2)
	{
		glBegin(GL_LINES);
		glVertex3f(-10.0f + i, 0.001f, -10.01f);
		glVertex3f(-10.0f + i, 0.001f, 10.01f);
		glEnd();
	}
	for (int i = 0; i < 20; i += 2)
	{
		glBegin(GL_LINES);
		glVertex3f(-10.0f, 0.001f, -10.01f + i);
		glVertex3f(10.0f, 0.001f, -10.01f + i);
		glEnd();
	}



	//draws windows
	Window w;
	w.drawWindow1();
	w.drawWindow2();
	w.drawWindowBorder();
	glPushMatrix();
	glTranslatef(0.0f, 0.0f, 8.0f);
	w.drawWindowBorder();
	glPopMatrix();

	//draws fan
	
	glPushMatrix();
	glTranslatef(0.0f, 6.0f, 0.0);
	glScalef(0.3f, 0.3f, 0.3f);
	f.drawFan();
	glPopMatrix();

	// draws shelf
	Shelf sh;
	glPushMatrix();
	//glTranslatef(8.99f, 3.5f, 4.0);
	glTranslatef(8.99f, 3.5f, 6.0);
	glScalef(0.25f, 0.25f, 0.25f);
	glRotatef(-90, 0.0f, 1.0f, 0.0f);
	sh.drawShelf();
	glPopMatrix();



	if (abs(mouseX) > 0.3) {
		angle -= (0.004f * mouseX);
		lx = sin(angle);
		lz = -cos(angle);
	}
	if (abs(mouseY) > 0.3) {
		if (abs(yAngle) < (M_PI / 2)) {
			yAngle += (0.002f * mouseY);
		}
		ly = sin(yAngle);
	}

	glutSwapBuffers();
}

//keyboard functions 
void Keyboard(int key, int xx, int yy) {

	float fraction = 0.1f;

	switch (key) {
	case GLUT_KEY_LEFT:
		x += sin(angle - M_PI / 2.0) * fraction;
		z += -cos(angle - M_PI / 2.0) * fraction;
		break;
	case GLUT_KEY_RIGHT:
		x += sin(M_PI / 2.0 + angle) * fraction;
		z += -cos(M_PI / 2.0 + angle) * fraction;
		break;
	case GLUT_KEY_UP:
		x += lx * fraction;
		z += lz * fraction;
		break;
	case GLUT_KEY_DOWN:
		x -= lx * fraction;
		z -= lz * fraction;
		break;
	}
}

//keyboard wasd function

void QKeys(unsigned char key, int xx, int yy) {
	float fraction = 0.1f;
	if (key == 'w') {
		x += lx * fraction;
		z += lz * fraction;
	}
	else if (key == 'a') {
		x += sin(angle - M_PI / 2.0) * fraction;
		z += -cos(angle - M_PI / 2.0) * fraction;
	}
	else if (key == 's') {
		x -= lx * fraction;
		z -= lz * fraction;
	}
	else if (key == 'd') {
		x += sin(M_PI / 2.0 + angle) * fraction;
		z += -cos(M_PI / 2.0 + angle) * fraction;
	}
	else if (key == 'x') {
		roll += 0.5f;
	}
	else if (key == 'z') {
		roll -= 0.5f;
	}

	if (key == 27)
		exit(0);
}

// mouse movement
void MouseMove(int xx, int yy) {

	mouseX = (float)(halfWidth - xx) / halfWidth;
	mouseY = (float)(halfHeight - yy) / halfHeight;
	angle -= (0.005f * mouseX);
	lx = sin(angle);
	lz = -cos(angle);

	if (abs(yAngle) < (M_PI / 2)) {
		yAngle += (0.005f * mouseY);
	}
	ly = sin(yAngle);

}


//reshape function
void reshape(int w, int h) {

	if (h == 0)
		h = 1;
	float ratio = w * 1.0 / h;

	glViewport(0, 0, w, h);
	halfWidth = (float)(w / 2.0);
	halfHeight = (float)(h / 2.0);


	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45.0f, ratio, 0.1f, 100.0f);

	glMatrixMode(GL_MODELVIEW);
}

//fan movement
void switchFan() {

	f.rotateFan();

	/* refresh screen */
	glutPostRedisplay();
}

//main
int main(int argc, char** argv) {


	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowPosition(0, 0);
	glutInitWindowSize(WINDOW_WIDTH, WINDOW_HEIGHT);
	glutCreateWindow("3DROOM");
	glutDisplayFunc(render);
	glutReshapeFunc(reshape);
	glutIdleFunc(switchFan);
	glutKeyboardFunc(QKeys);
	glutSpecialFunc(Keyboard);
	glutPassiveMotionFunc(MouseMove);
	
	
	glEnable(GL_DEPTH_TEST);
	glutMainLoop();

	return 1;
}



