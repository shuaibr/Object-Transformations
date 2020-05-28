#ifndef PYRAMID_H
#define PYRAMID_H

#include <GL/glut.h>
#include "Shape.hpp"

class Pyramid: public Shape {
public:
	Pyramid();
	void draw();
};

#endif
