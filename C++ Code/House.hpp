#ifndef HOUSE_H
#define HOUSE_H

#include <GL/glut.h>
#include "Shape.hpp"
#include "Pyramid.hpp"
#include "Cube.hpp"

class House: public Shape {
protected:
	Cube* body;
	Pyramid* roof;

public:
	House();
	void draw();
};

#endif
