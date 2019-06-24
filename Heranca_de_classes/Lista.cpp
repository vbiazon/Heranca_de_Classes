#include "Lista.h"
#include <stdio.h>
#include <iostream>
#include <stdexcept>
#define NULL 0
using namespace std;

Lista::Lista() // construtor da lista
{
	ini = NULL;
	fim = NULL;
}

Lista::~Lista() //destrutor da lista
{
	Elemento* tmp;

	tmp = ini;
	while (tmp != NULL) {
		ini = ini->proximo; //Atualiza o elemento da frente da fila
		delete tmp; // deleta elemento temporario
		tmp = ini; // atualiza tmp para proxima posicao
	}
}

void Lista::InsereFinal(int x) { //insere elemento no fim da lista

	if (fim == NULL) { //se nao ouver ponteiro para o elemento do fim da lista, esta vazio, chama funcao insereInicio.
		InsereInicio(x);
	}
	else {
		Elemento* novo; 
		novo = new Elemento; // cria novo elemento no ponteiro novo
		novo->valor = x; //atribui o valor x ao valor do novo elemento
		cout << "Inserido valor: " << x << endl;
		fim->proximo = novo; //atualiza a posicao proximo do ultimo elemento para o novo elemneto
		novo->anterior = fim; // atualiza a posicao do elemento anterior do novo elemento para o elemento que era o ultimo
		fim = novo; //atribui a posicao de fim para o novo elemento
	}
}

void Lista::InsereInicio(int x) { //insere elemento no inicio da lista
	Elemento* novo;
	novo = new Elemento; // cria novo elemento no ponteiro novo
	novo->valor = x; //atribui o valor x ao valor do novo elemento
	cout << "Inserido valor: " << x << endl;
	if (ini == NULL) { //Se nao houver ponteiro para o primeiro elemento da lista, significa que esta vazia logo o novo elemento é o primeiro e o ultimo
		ini = fim = novo;
	}
	else {
		novo->proximo = ini; //atualiza a posicao do proximo elemento do novo elemento como o elemento inicial
		ini->anterior = novo; // atualiza a posicao do anterior do elemento inicial para o novo elemento
		ini = novo; // o novo elemento é agora o elemento inicial
	}
}

int Lista::RetiraFinal() { //retira valor do final da lista
	if (isEmpty()) { //Verifica se a lista esta vazia, se estiver lanca excecao
		throw std::exception("Lista vazia");
	}
	int aux = fim->valor; //guarda valor do elemento final numa variavel auxiliar
	if (fim->anterior == NULL) { //se o elemento anterior ao fim é nulo, só há um elemento na lista, logo se inicializa os ponteiros fim e ini
		fim = NULL;
		ini = NULL;
		return aux;
	}
	else {
		fim->anterior->proximo = NULL; //se nao atualiza o valor do ponteiro proximo do elemento anterior ao final para null
			fim = fim->anterior; // atualiza o elemento anterior sendo o novo final da lista
	}
	
	return aux; //retorna valor armazenado
}

int Lista::RetiraInicio() { //retira valor do inicio da lista

	if (isEmpty()) { //Verifica se a lista esta vazia, se estiver lanca excecao
		throw std::exception("Lista vazia");
	}
	int aux = ini->valor; //guarda valor do elemento final numa variavel auxiliar
	if (ini->proximo == NULL) {//se o elemento proximo ao inicio é nulo, só há um elemento na lista, logo se inicializa os ponteiros fim e ini
		fim = NULL;
		ini = NULL;
		return aux;
	}
	ini->proximo->anterior = NULL; //se nao atualiza o valor do ponteiro anterior do elemento proximo ao inicio para null
	ini = ini->proximo; //atualiza o proximo elemento sendo o inicio da lista
	return aux; //retorna valor armazenado

}

Elemento* Lista::Busca(int x) { //verifica se existe um valor armazenado na lista e retorna o ponteiro para a posicao caso exista
	if (isEmpty()) { //Verifica se a lista esta vazia, se estiver lanca excecao
		throw std::exception("Lista vazia");
	}
	Elemento* tmp = ini; //atribui um elemento temporario para o inicio da lista
	do {
		if (tmp->valor == x) { // verifica se o elemento coincide com o valor buscado
			return tmp; // se sim retorna ponteiro da posicao encontrada
		}
		tmp = tmp->proximo; //atualiza posicao do ponteiro para proximo elemento
	} while (tmp != NULL); // executa enquanto nao chegar no final
	return NULL; //se nao for encontrado retorna NULL
	
}

void Lista::Imprimir() { //imprime do comeco ao fim os valores da lista
	if (isEmpty()) { //Verifica se a lista esta vazia, se estiver lanca excecao
		throw std::exception("Lista vazia");
	}
	Elemento* tmp = ini; //atribui um elemento temporario para o inicio da lista
	cout << "A lista armazenada e: ";
	do {
		cout << tmp->valor << " - ";
		tmp = tmp->proximo; //atualiza posicao do ponteiro para proximo elemento
	} while (tmp != NULL); // executa enquanto nao chegar no final
	cout << endl;
	
}

Elemento* Lista::GetIni() // Retorna ponteiro do inicio da lista
{
	return ini; 
}

Elemento* Lista::GetFim() // Retorna ponteiro do final da lista
{
	return fim;
}

bool Lista::isEmpty() // varifica lista vazia
{
	return ini == NULL; //se o ponteiro do inicio estiver vazio, a lista esta vazia, retorna true

}
