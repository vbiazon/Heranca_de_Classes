#include "Pilha.h"
#include "Lista.h"
#include <iostream>
#include <stdexcept>
using namespace std;

Pilha::Pilha()
{
	Lista::Lista(); // Chama construtor da lista
}

Pilha::~Pilha()
{
	Lista::~Lista(); //chama destrutor da lista
}

void Pilha::Push(int x) // insere valor no final da pilha pelo metodo herdado
{
	InsereFinal(x); 
}

int Pilha::Pop(void) //retira valor no final da pilha pelo metodo herdado
{
		int aux = RetiraFinal();
		return aux;
	}

int Pilha::Top(void) //mostra valor no topo da pilha
{
	Elemento* aux = GetFim();
	return aux->valor;
}

