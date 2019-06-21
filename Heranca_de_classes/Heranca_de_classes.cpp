// Heranca_de_classes.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <stdio.h>
#include "Elemento.h"
#include "Lista.h"
#include "Pilha.h"
#include "Fila.h"
#include <vector>
#include <stdexcept>

using namespace std;


int main()
{

	Lista L1;
	
	L1.InsereInicio(1);
	L1.InsereFinal(2);
	L1.InsereFinal(3);
	L1.InsereFinal(4);
	L1.InsereFinal(5);
	L1.InsereFinal(6);
	L1.RetiraInicio();
	L1.RetiraFinal();
	L1.Imprimir();

	Pilha P1;

	P1.Push(1);
	P1.Push(2);
	P1.Push(3);
	P1.Push(4);
	cout << P1.Pop() << endl;
	cout << P1.Pop() << endl;


	P1.Push(1);
	P1.Push(2);
	P1.Push(3);
	P1.Push(4);
	cout << P1.Pop() << endl;
	P1.Push(5);
	P1.Imprimir();

	Fila F1;
	cout << endl << "Fila" << endl;
	F1.Enqueue(1);
	F1.Enqueue(2);
	F1.Enqueue(3);
	F1.Enqueue(4);
	F1.Enqueue(5);
	F1.Enqueue(6);
	cout << F1.Dequeue() << endl;
	cout << F1.Dequeue() << endl;
	cout << F1.Dequeue() << endl;
	cout << F1.Front() << endl;
	cout << F1.Dequeue() << endl;



	/*Elemento* n;
	Elemento* h;
	Elemento* t;
	Elemento* pnt;

	n = new Elemento;
	t = n;
	h = n;
	n->valor = 1;

	n = new Elemento;
	t->proximo = n;
	n->valor = 2;
	t = n;

	n = new Elemento;
	t->proximo = n;
	n->valor = 3;
	t = n;

	n = new Elemento;
	t->proximo = n;
	n->valor = 4;
	t = n;

	pnt = h;
	while (pnt->proximo != NULL)  {
		cout << pnt->valor << endl;
		pnt = pnt->proximo;
	}
	cout << pnt->valor << endl;*/
	int x;
	cin >> x;
}

