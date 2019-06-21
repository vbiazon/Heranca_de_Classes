#include "Pilha.h"
#include "Lista.h"
#include <iostream>
#include <stdexcept>
using namespace std;

Pilha::Pilha()
{
	
}

Pilha::~Pilha()
{

}

void Pilha::Push(int x)
{
	InsereFinal(x);
}

int Pilha::Pop(void)
{
		int aux = RetiraFinal();
		return aux;
	}

