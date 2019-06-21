#pragma once
#include "Lista.h"
class Pilha : public Lista //Pilha herda atributos de Lista
{
public:
	Pilha(); //Construtor
	~Pilha(); // Destrutor
	void Push(int x); // Empilha valor na pilha criada
	int Pop(void); // Desempilha valor da pilha criada

};

