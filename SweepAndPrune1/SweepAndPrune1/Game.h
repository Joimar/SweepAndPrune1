#pragma 
#include "GameObject.h"
#include <glm/glm.hpp>
class Game
{
	private:
		
	public:
		void moveObject(glm::vec3 movement, GameObject *object);
		GameObject objectList[10];

		bool isCollision(GameObject * obj1, GameObject * obj2);
		
};