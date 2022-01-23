#include "GameObject.h"

GameObject::GameObject() 
{
	arestaList[0].x = 3.0;
	arestaList[0].y = 3.0;
	arestaList[0].z = 3.0;

	arestaList[1].x = -3.0;
	arestaList[1].y = -3.0;
	arestaList[1].z = -3.0;

}

void GameObject::setCoord(coord coordinates)
{
	arestaList[0].x += coordinates.x;
	arestaList[0].y += coordinates.y;
	arestaList[0].z += coordinates.z;

	arestaList[1].x += coordinates.x;
	arestaList[1].y += coordinates.y;
	arestaList[1].z += coordinates.z;

	centralPoint = coordinates;

}

void GameObject::setArestas(coord pSuperior, coord pInferior)
{
	arestaList[0] = pSuperior;
	arestaList[1] = pInferior;
}

coord* GameObject::getArestas()
{
	return arestaList;
}


