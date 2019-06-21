#include "Lista.h"
#include <stdio.h>
#include <iostream>
#include <stdexcept>
#define NULL 0
using namespace std;

Lista::Lista()
{
	ini = NULL;
	fim = NULL;
}

Lista::~Lista()
{
	Elemento* tmp;

	tmp = ini;
	while (tmp != NULL) {
		ini = ini->proximo; //Atualiza o elemento da frente da fila
		delete tmp;
		tmp = ini;
	}
}

void Lista::InsereFinal(int x) {
	Elemento* novo;
	novo = new Elemento;
	novo->valor = x;
	if (fim == NULL) {
		InsereInicio(x);
	}
	else {
		fim->proximo = novo;
		novo->anterior = fim;
		fim = novo;
	}
}

void Lista::InsereInicio(int x) {
	Elemento* novo;
	novo = new Elemento;
	novo->valor = x;
	if (ini == NULL) {
		ini = fim = novo;
	}
	else {
		novo->proximo = ini;
		ini->anterior = novo;
		ini = novo;
	}
}

int Lista::RetiraFinal() {
	try {
		int aux = fim->valor;
		fim->anterior->proximo = NULL;
		fim = fim->anterior;
		return aux;
	}
	catch (exception& exc) {
		cout << "Lista vazia" << endl;
	}
}

int Lista::RetiraInicio() {
	try {
		int aux = ini->valor;
		ini->proximo->anterior = NULL;
		ini = ini->proximo;
		return aux;
	}
	catch (exception& exc) {
		cout << "Lista vazia" << endl;
	}
}

Elemento* Lista::Busca(int x) {
	try {
		Elemento* tmp = ini;
		do {
			if (tmp->valor == x) {
				return tmp;
			}
			tmp = tmp->proximo;
		} while (tmp != NULL);
		return NULL;
	}
	catch (exception& exc) {
		cout << "Lista vazia" << endl;
	}
}

void Lista::Imprimir() {
	try {
		Elemento* tmp = ini;
		cout << "A lista armazenada é: ";
		do {
			cout << tmp->valor << " - ";
			tmp = tmp->proximo;
		} while (tmp != NULL);
		cout << endl;
	}
	catch (exception& exc) {
		cout << "Lista vazia" << endl;
	}
}

Elemento* Lista::GetIni()
{
	return ini;
}

Elemento* Lista::GetFim()
{
	return fim;
}

bool Lista::isEmpty()
{
	if (ini == NULL && fim == NULL) {
		return true;
	}
	return false;
}
