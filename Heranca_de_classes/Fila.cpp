#include "Fila.h"

Fila::Fila()
{
	Lista::Lista();// Chama construtor da lista
}

Fila::~Fila()
{
	Lista::~Lista(); //chama destrutor da lista
}

void Fila::Enqueue(int x) 
{
	InsereInicio(x); //insere valor no inicio da fila pelo metodo herdado
}

int Fila::Dequeue()
{
	int aux = RetiraFinal(); //retira valor do final da fila pelo metodo herdado
	return aux;
}

int Fila::Front() //mostra valor na frente da fila
{
	Elemento* aux = GetFim();
	return aux->valor;
}

