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
	try {
		Lista L1;
		cout << "Teste da Lista: " << endl;
		L1.InsereInicio(1);
		L1.InsereFinal(2);
		L1.InsereFinal(3);
		L1.InsereFinal(4);
		L1.InsereFinal(5);
		L1.InsereFinal(6);
		cout << "Retirado do inicio: " << L1.RetiraInicio() << endl;
		cout << "Retirado do final: " << L1.RetiraFinal() << endl;
		L1.Imprimir();

		Pilha P1;
		cout << endl << "Teste da Pilha: " << endl;
		P1.Push(1);
		P1.Push(2);
		P1.Push(3);
		P1.Push(4);
		cout << "Retirado: "<< P1.Pop() << endl;
		cout << "Retirado: " << P1.Pop() << endl;
		cout << "Retirado: " << P1.Pop() << endl;
		cout << "Elemento no topo: " << P1.Top() << endl;
		cout << "Retirado: " << P1.Pop() << endl;
		P1.Push(1);
		P1.Push(2);
		P1.Push(3);
		P1.Push(4);
		cout << "Retirado: " << P1.Pop() << endl;
		P1.Push(5);
		P1.Imprimir();

		Fila F1;
		cout << endl << "Teste da Fila" << endl;
		F1.Enqueue(1);
		F1.Enqueue(2);
		F1.Enqueue(3);
		F1.Enqueue(4);
		F1.Enqueue(5);
		F1.Enqueue(6);
		cout << "Retirado: " << F1.Dequeue() << endl;
		cout << "Retirado: " << F1.Dequeue() << endl;
		cout << "Retirado: " << F1.Dequeue() << endl;
		cout << "Elemento na frente: " << F1.Front() << endl;
		cout << "Retirado: " << F1.Dequeue() << endl;
		F1.Enqueue(2);
		F1.Enqueue(3);
		F1.Enqueue(4);
		F1.Enqueue(5);
		F1.Imprimir();
	}

catch (const exception exc){
	cout << "Ocorreu um erro!" << endl;
	cerr << exc.what() << endl;
}

	int x;
	cin >> x;
}

