#include "Fila.h"

Fila::Fila()
{
}

Fila::~Fila()
{
}

void Fila::Enqueue(int x)
{
	InsereInicio(x);
}

int Fila::Dequeue()
{
	int aux = RetiraFinal();
	return aux;
}

int Fila::Front()
{
	Elemento* aux = GetFim();
	return aux->valor;
}

