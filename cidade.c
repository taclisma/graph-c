#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cidade.h"
#include "lista.h"

// popula lista adjacente
void list_adj();

// print lista adj
void print_adj();

// calcula dist
void calc();

Tcidade grafo[MAX_VERTICES][MAX_VERTICES];
int precede[MAX_VERTICES];
int origem, destino;

int main(void) {
	int i;
	//array ponteiro de listas
	list *vet[7];
	for(i = 0; i < 7; i++){
		vet[i] = init(); 
		insert(vet[i], 1);
		insert(vet[i], 2);
	}
	
	
	insert(vet[3], 3);
	printf("help %i\n\n", empty(vet[0]));
	printf("help %i\n\n", empty(vet[3]));

	printlist(vet[1]);
	printlist(vet[3]);
	for(i = 0; i < 7; i++){
		cleanlist(vet[i]);
	}



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





	return (0);
}

// popula lista adjacente
void list_adj(){
	//
}

// print lista adj
void print_adj(){
	//
}

// calcula dist
void calc(){
	//
}