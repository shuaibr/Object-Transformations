#include "Pyramid.hpp"

Pyramid::Pyramid()
{
	this->translate(0, 1, 0);
}

void Pyramid::draw()
{
    glPushMatrix();
    this->ctm_multiply();
	glScalef(s, s, s);

	glBegin(GL_LINE_LOOP);

	glVertex3f(-1, -1, -1);
	glVertex3f(-1, -1, 1);
	glVertex3f(1, -1, 1);
	glVertex3f(1, -1, -1);
	glVertex3f(-1, -1, -1);
	glVertex3f(0, 0, 0);
	glVertex3f(1, -1, -1);
	glVertex3f(1, -1, 1);
	glVertex3f(0, 0, 0);
	glVertex3f(-1, -1, 1);

	glEnd();
    glPopMatrix();
}
