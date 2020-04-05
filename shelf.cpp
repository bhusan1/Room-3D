#include "shelf.h"



void Shelf::drawHouse() {

	// house
	glPushMatrix();

	glPopMatrix();
}

void Shelf::drawCubBoard()
{
	//glTranslatef(0, 0, -14);
	glPushMatrix();

	glBegin(GL_QUADS);


	glColor3f(0.4f, 0.2f, 0.0f);
	glVertex3f(-4.0f, 0.0f, -4.0f);
	glVertex3f(0.0f, 0.0f, -4.0f);
	glVertex3f(0.0f, 4.0f, -4.0f);
	glVertex3f(-4.0f, 4.0f, -4.0f);



	//chair upper side
	glColor3f(0.302, 0.2, 0);
	glVertex3f(-4.0f, 0.0f, -4.0f);
	glVertex3f(-4.0f, 0.0f, -0.0f);
	glVertex3f(-4.0f, 4.0f, -0.0f);
	glVertex3f(-4.0f, 4.0f, -4.0f);

	glVertex3f(0.0f, 0.0f, -4.00f);
	glVertex3f(0.0f, 0.0f, -0.0f);
	glVertex3f(0.0f, 4.0f, -0.0f);
	glVertex3f(0.0f, 4.0f, -4.0f);

	//chiar upper top 
	glColor3f(0.302, 0.2, 0);
	glVertex3f(-4.0f, 4.0f, -4.00f);
	glVertex3f(-4.0f, 4.0f, -0.0f);
	glVertex3f(0.0f, 4.0f, -0.0f);
	glVertex3f(0.0f, 4.0f, -4.0f);

	glVertex3f(-4.0f, 0.0f, -4.00f);
	glVertex3f(-4.0f, 0.0f, -0.0f);
	glVertex3f(0.0f, 0.0f, -0.0f);
	glVertex3f(0.0f, 0.0f, -4.0f);

	glVertex3f(-4.0f, 0.0f, 0.0f);
	glVertex3f(0.0f, 0.0f, 0.0f);
	glVertex3f(0.0f, 0.2f, 0.0f);
	glVertex3f(-4.0f, 0.2f, 0.0f);



	glEnd();

	glPopMatrix();
}

void Shelf::drawShelf() {
	drawCubBoard();

	glPushMatrix();

	glTranslatef(4, -4, 0);
	drawCubBoard();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(2.5, -3, -1.2);
	glRotatef(-90, 0, 1, 0);
	drawHouse();
	glPopMatrix();
}