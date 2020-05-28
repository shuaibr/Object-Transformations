#include "House.hpp"

House::House()
{
	body = new Cube();
	roof = new Pyramid();
	roof->translate(0, 1, 0);
}

void House::draw()
{
	glPushMatrix();
	this->ctm_multiply();
	glScalef(s, s, s);
	body->draw();
	roof->draw();
	glPopMatrix();
}
