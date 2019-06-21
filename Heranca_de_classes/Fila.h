#pragma once
#include "Lista.h"
class Fila : public Lista //Fila herda atributos de Lista
{
public:
	Fila(); // Construtor
	~Fila(); // Destrutor
	void Enqueue(int x); // Insere valor no topo da pilha
	int Dequeue(); // Retira valor do topo da pilha
	int Front(); // Mostra valor no topo da pilha sem retirar
};

