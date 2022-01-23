#include <iostream>
#include "Game.h"
#include "GameObject.h"

int main() 
{
	Game joguinho = Game();
	GameObject objeto1 = GameObject();
	GameObject objeto2 = GameObject();

	coord movimentacao;
	movimentacao.x = 3.0;
	movimentacao.y = 0.0;
	movimentacao.z = 8.0;
	
	joguinho.moveObject(movimentacao, objeto1);
	joguinho.objectList[0] = objeto1;
	joguinho.objectList[1] = objeto2;
	
	coord* aux;
	
	aux = joguinho.objectList[0].getArestas();//objeto1.getArestas();
	std::cout << "Dimensao objeto 1: " << aux[0].x  << ", " << aux[1].y << ", "<< aux[1].z << std::endl;
	aux = joguinho.objectList[1].getArestas();
	std::cout << "Dimensao objeto 2: " << aux[0].x << ", " << aux[1].y << ", " << aux[1].z << std::endl;

	getchar();

	return 0;
}