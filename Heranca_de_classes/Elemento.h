#pragma once
#define NULL 0

struct Elemento // cria struct de elemento com ponteiros de anterior e proximo
{
	int valor = NULL;
	Elemento* proximo = NULL;
	Elemento* anterior = NULL;

};