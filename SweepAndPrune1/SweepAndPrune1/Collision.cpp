#include "Collision.h"
//Já consigo pegar todos os min e max pelo min e max de cada objeto

bool isCollision1(GameObject obj1, GameObject obj2) {

	bool flagX = false;
	bool flagY = false;
	bool flagZ = false;

	if ( (obj1.getArestas()[0].x > obj2.getArestas()[0].x) && (obj1.getArestas()[0].x < obj2.getArestas()[1].x) ) {
	
		flagX = true;
	}
	else flagX = false;

	if ((obj1.getArestas()[0].y > obj2.getArestas()[0].y) && (obj1.getArestas()[0].y < obj2.getArestas()[1].y)) {
		flagY = true;
	}
	else flagY = false;

	if ((obj1.getArestas()[0].z > obj2.getArestas()[0].z) && (obj1.getArestas()[0].z < obj2.getArestas()[1].z)) {
		flagZ = true;
	}
	else flagZ = false;

	return (flagX && flagY && flagZ);
}


