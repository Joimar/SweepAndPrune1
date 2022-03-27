#include <iostream>
#include "Game.h"
#include "GameObject.h"
#include  <glm/glm.hpp>

int main() 
{

	Game joguinho = Game();
	GameObject *objeto1 = new GameObject();
	GameObject objeto2 = GameObject();

	glm::vec3 movimentacao;
	movimentacao.x = 3.0;
	movimentacao.y = 0.0;
	movimentacao.z = 8.0;
	
	joguinho.moveObject(movimentacao, objeto1); // Movimentando objeto1
	joguinho.objectList[0] = *objeto1;	// pq eu estou passando um ponteiro para o primeiro índice da objectList?
	joguinho.objectList[1] = objeto2;
	
	glm::vec3* aux;
	
	aux = joguinho.objectList[0].getArestas();//objeto1.getArestas();
	std::cout << "Dimensao objeto 1: " << aux[0].x  << ", " << aux[0].y << ", "<< aux[0].z << std::endl; //pq estou exibindo os valores x, y, z superiores?
	aux = joguinho.objectList[1].getArestas();
	std::cout << "Dimensao objeto 2: " << aux[1].x << ", " << aux[1].y << ", " << aux[1].z << std::endl; //pq estou exibindo os valores x, y, z inferiores?

	getchar();

	return 0;
}