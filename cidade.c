#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cidade.h"
#include "lista.h"
Tcidade grafo[MAX_VERTICES][MAX_VERTICES];
int precede[MAX_VERTICES];
int origem, destino;

int main(void) {


	list *lista = (list*) malloc(sizeof(list));
	if(lista != NULL){
	init(lista);
	
	printf("help %i\n\n", empty(lista));
	
	insert(lista, 1);
	printf("help %i\n\n", empty(lista));
	insert(lista, 2);
	insert(lista, 3);

	printlist(lista);

	cleanlist(lista);
	}

/*
	Inicializa_Grafo(grafo);

	Cria_Aresta(grafo, 0, 1, 1100);
	Cria_Aresta(grafo, 1, 0, 1100);
	Cria_Aresta(grafo, 0, 2, 1700);
	Cria_Aresta(grafo, 1, 4, 2300);
	Cria_Aresta(grafo, 1, 5, 1500);
	Cria_Aresta(grafo, 2, 0, 1700);
	Cria_Aresta(grafo, 2, 6, 2700);
	Cria_Aresta(grafo, 2, 3, 300);
	Cria_Aresta(grafo, 3, 2, 300);
	Cria_Aresta(grafo, 3, 4, 800);
	Cria_Aresta(grafo, 4, 1, 2300);
	Cria_Aresta(grafo, 4, 3, 800);
	Cria_Aresta(grafo, 4, 6, 650);
	Cria_Aresta(grafo, 5, 1, 1500);
	Cria_Aresta(grafo, 5, 6, 1900);
	Cria_Aresta(grafo, 6, 5, 1900);
	Cria_Aresta(grafo, 6, 4, 650);
	Cria_Aresta(grafo, 6, 2, 2700);

	system("cls");

	Imprime_Matriz(grafo);

	printf(" \n Lista de Adjacencias \n");

	Imprime_Menu();

	Le_Origem_Destino(MAX_VERTICES - 1, &origem, &destino);

	printf(" Aqui Implementar Distancia entre %s e %s \n", cidades[origem], cidades[destino]);
*/




	return (0);
}
