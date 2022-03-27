#pragma once
//Os GameObjects são todos >>>>>CUBOS<<<<<
#include <glm/glm.hpp>
class GameObject
{
	private:
		glm::vec3 arestaList[2];//Pq a lista de aresta tem apenas duas? - é mínimo e máximo
		glm::vec3 centralPoint;
		glm::vec3 max, min;// máximo e mínimo de que mesmo?
	public:
		GameObject();
		void setCoord(glm::vec3 coordinates);
		void setArestas(glm::vec3 p1, glm::vec3 p2);
		glm::vec3* getArestas();
};

