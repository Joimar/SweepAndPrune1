#include "Game.h"

void Game::moveObject(glm::vec3 movement, GameObject* object)
{
	object->setCoord(movement);
}


bool Game::isCollision(GameObject * obj1, GameObject * obj2) {

	bool flagX = false;
	bool flagY = false;
	bool flagZ = false;

	if ((obj1->getArestas()[0].x >= obj2->getArestas()[0].x) && (obj1->getArestas()[0].x <= obj2->getArestas()[1].x)) 
	{
		flagX = true;
	}
	if ((obj1->getArestas()[0].y >= obj2->getArestas()[0].y) && (obj1->getArestas()[0].y <= obj2->getArestas()[1].y))
	{
		flagY = true;
	}
	if ((obj1->getArestas()[0].z >= obj2->getArestas()[0].z) && (obj1->getArestas()[0].z <= obj2->getArestas()[1].z))
	{
		flagZ = true;
	}

	if ( (flagX == true) && (flagY == true) && (flagZ == true) ) return true;
	else return false;
}

