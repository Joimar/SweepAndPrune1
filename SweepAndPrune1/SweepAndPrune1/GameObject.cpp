#include "GameObject.h"

GameObject::GameObject() 
{
	max = glm::vec3(3, 3, 3);
	min = glm::vec3(-3,-3,-3);
	arestaList[0] = min;
	arestaList[1] = max;
}

void GameObject::setCoord(glm::vec3 coordinates)
{

	centralPoint = coordinates;
	
	arestaList[0] = centralPoint + min;
	arestaList[1] = centralPoint + max;

}

void GameObject::setArestas(glm::vec3 pSuperior, glm::vec3 pInferior)
{
	arestaList[0] = pSuperior;
	arestaList[1] = pInferior;
}

glm::vec3* GameObject::getArestas()
{
	return arestaList;
}


