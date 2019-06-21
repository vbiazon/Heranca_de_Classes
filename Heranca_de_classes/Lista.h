#pragma once
#include "Elemento.h"

class Lista
{
public:
	Lista();
	~Lista();
	void InsereFinal(int x); //Insere elemento no final da lista
	void InsereInicio(int x);// Insere elemento no inicio da lista
	int RetiraFinal(); //Retira elemento do final da lista
	int RetiraInicio(); //retira elemento do inicio da lista
	Elemento* Busca(int x); //Retorna ponteiro do elemento que contem x, se nao retonra NULL
	void Imprimir(); //Imprime a lista toda
	Elemento* GetIni(); //Retorna ponteiro da posicao inicial da lista
	Elemento* GetFim(); //Retorna ponteiro da posicao final da lista
	bool isEmpty(); //retorna true para lista vazia, false para lista nao fazia.

private:
	Elemento* ini; //Guarda o ponteiro do inicio da lista ligada
	Elemento* fim; //Guarda o ponteiro do fim da lista ligada

};

