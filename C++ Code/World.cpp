/**
 * File: World.hpp
 */

#include "World.hpp"

World::World() {
	list[0] = new Cube();
	list[1] = new Pyramid();
	list[2] = new House();

	//Mesh* mymesh = new Mesh();
	//mymesh->readMesh("barn.3VN");
	//mymesh->readMesh("BUCK.3VN");
	//list[1] = mymesh;

    /* object list
	ObjectList.push_back(list[0]);
	ObjectList.push_back(list[1]);
    */

	/* object vector
	ObjectVector = new std::vector<Shape*>(2);
	std::vector<Shape*>& ObjectVecotrRef = *ObjectVector;
	ObjectVectorRef[0] = list[0];
	ObjectVectorRef[1] = list[1];
    */
}

World::~World(){
    delete list[0];
    delete list[1];
    delete list[2];
}

void World::draw_world() {
	list[0]->draw();
	list[1]->draw();
	list[2]->draw();

	/*
	for (std::list<Shape*>::const_iterator it = ObjectList.begin(); it!=ObjectList.end(); ++it) {
		(*it)->draw();
	} */

	/*
	std::vector<Shape*>& ObjectVectorRef = *ObjectVector;
	for (int i = 0; i < 2; i++ ) {
		 ObjectVectorRef[i]->draw();
	} */

}

