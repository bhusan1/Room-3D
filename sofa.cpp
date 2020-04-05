#include "sofa.h"

void Sofa::drawSofa() {

	glColor3f(0.2, 0.2, 0.0);
	//glColor3f(0.4f, 0.302f, 0.1f);
	glBegin(GL_QUADS);

	//Front OPP DOOR 
	//
	glVertex3f(-4.0f, -0.2f, 2.0f);//B
	glVertex3f(4.0f, -0.2f, 2.0f);//C
	glVertex3f(4.0f, 0.2f, 2.0f);//D
	glVertex3f(-4.0f, 0.2f, 2.0f);//A

	//Right
	//
	glVertex3f(4.0f, -0.2f, -2.0f);//F
	glVertex3f(4.0f, 0.2f, -2.0f);//E
	glVertex3f(4.0f, 0.2f, 2.0f);//D
	glVertex3f(4.0f, -0.2f, 2.0f);//C

	//Back NEAR DOOR
	//;
	glVertex3f(-4.0f, -0.2f, -2.0f);//H
	glVertex3f(-4.0f, 0.2f, -2.0f);//G
	glVertex3f(4.0f, 0.2f, -2.0f);//E
	glVertex3f(4.0f, -0.2f, -2.0f);//F

	//Left
	;
	glVertex3f(-4.0f, -0.2f, -2.0f);//H
	glVertex3f(-4.0f, -0.2f, 2.0f);//B
	glVertex3f(-4.0f, 0.2f, 2.0f);//A
	glVertex3f(-4.0f, 0.2f, -2.0f);//G

	//top
	//
	glColor3f(0.4f, 0.302f, 0.1f);
	glVertex3f(4.0f, 0.2f, 2.0f);//D
	glVertex3f(-4.0f, 0.2f, 2.0f);//A
	glVertex3f(-4.0f, 0.2f, -2.0f);//G
	glVertex3f(4.0f, 0.2f, -2.0f);//E

	//bottom
	;

	glVertex3f(4.0f, -0.2f, 2.0f);//C
	glVertex3f(-4.0f, -0.2f, 2.0f);//B
	glVertex3f(-4.0f, -0.2f, -2.0f);//H
	glVertex3f(4.0f, -0.2f, -2.0f);//F

	//table front leg
	//front
	//
	glColor3f(0.2, 0.2, 0.0);
	glVertex3f(1.8f, -0.2f, 1.6f);
	glVertex3f(1.4f, -0.2f, 1.6f);
	glVertex3f(1.4f, -3.0f, 1.6f);
	glVertex3f(1.8f, -3.0f, 1.6f);

	//back
	//;

	glVertex3f(1.8f, -0.2f, 1.2f);
	glVertex3f(1.4f, -0.2f, 1.2f);
	glVertex3f(1.4f, -3.0f, 1.2f);
	glVertex3f(1.8f, -3.0f, 1.2f);

	//right
	//

	glVertex3f(1.8f, -0.2f, 1.6f);
	glVertex3f(1.8f, -0.2f, 1.2f);
	glVertex3f(1.8f, -3.0f, 1.2f);
	glVertex3f(1.8f, -3.0f, 1.6f);

	//left
	//;

	glVertex3f(1.4f, -0.2f, 1.6f);
	glVertex3f(1.4f, -0.2f, 1.2f);
	glVertex3f(1.4f, -3.0f, 1.2f);
	glVertex3f(1.4f, -3.0f, 1.6f);

	//back leg back
	//front
	//;

	glVertex3f(1.8f, -0.2f, -1.2f);
	glVertex3f(1.4f, -0.2f, -1.2f);
	glVertex3f(1.4f, -3.0f, -1.2f);
	glVertex3f(1.8f, -3.0f, -1.2f);

	//back
	//;

	glVertex3f(1.8f, -0.2f, -1.6f);
	glVertex3f(1.4f, -0.2f, -1.6f);
	glVertex3f(1.4f, -3.0f, -1.6f);
	glVertex3f(1.8f, -3.0f, -1.6f);

	//right
	//

	glVertex3f(1.8f, -0.2f, -1.6f);
	glVertex3f(1.8f, -0.2f, -1.2f);
	glVertex3f(1.8f, -3.0f, -1.2f);
	glVertex3f(1.8f, -3.0f, -1.6f);

	//left
	//

	glVertex3f(1.4f, -0.2f, -1.6f);
	glVertex3f(1.4f, -0.2f, -1.2f);
	glVertex3f(1.4f, -3.0f, -1.2f);
	glVertex3f(1.4f, -3.0f, -1.6f);

	//leg left front
	//

	glVertex3f(-1.8f, -0.2f, 1.6f);
	glVertex3f(-1.4f, -0.2f, 1.6f);
	glVertex3f(-1.4f, -3.0f, 1.6f);
	glVertex3f(-1.8f, -3.0f, 1.6f);

	//back
	//;

	glVertex3f(-1.8f, -0.2f, 1.2f);
	glVertex3f(-1.4f, -0.2f, 1.2f);
	glVertex3f(-1.4f, -3.0f, 1.2f);
	glVertex3f(-1.8f, -3.0f, 1.2f);

	//right


	glVertex3f(-1.8f, -0.2f, 1.6f);
	glVertex3f(-1.8f, -0.2f, 1.2f);
	glVertex3f(-1.8f, -3.0f, 1.2f);
	glVertex3f(-1.8f, -3.0f, 1.6f);

	//left
	;

	glVertex3f(-1.4f, -0.2f, 1.6f);
	glVertex3f(-1.4f, -0.2f, 1.2f);
	glVertex3f(-1.4f, -3.0f, 1.2f);
	glVertex3f(-1.4f, -3.0f, 1.6f);

	//left leg back front

	//front
	;

	glVertex3f(-1.8f, -0.2f, -1.2f);
	glVertex3f(-1.4f, -0.2f, -1.2f);
	glVertex3f(-1.4f, -3.0f, -1.2f);
	glVertex3f(-1.8f, -3.0f, -1.2f);

	//back
	;

	glVertex3f(-1.8f, -0.2f, -1.6f);
	glVertex3f(-1.4f, -0.2f, -1.6f);
	glVertex3f(-1.4f, -3.0f, -1.6f);
	glVertex3f(-1.8f, -3.0f, -1.6f);

	//right


	glVertex3f(-1.8f, -0.2f, -1.6f);
	glVertex3f(-1.8f, -0.2f, -1.2f);
	glVertex3f(-1.8f, -3.0f, -1.2f);
	glVertex3f(-1.8f, -3.0f, -1.6f);

	//left

	glColor3f(0.2, 0.2, 0.0);
	glVertex3f(-1.4f, -0.2f, -1.6f);
	glVertex3f(-1.4f, -0.2f, -1.2f);
	glVertex3f(-1.4f, -3.0f, -1.2f);
	glVertex3f(-1.4f, -3.0f, -1.6f);


	glEnd();

}