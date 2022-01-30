#include "Game.h"

void Game::moveObject(glm::vec3 movement, GameObject* object)
{
	object->setCoord(movement);
}
