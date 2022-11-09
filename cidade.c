#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cidade.h"
#include "lista.h"


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
	list *vet[8];
	for(i = 0; i < 8; i++){
		vet[i] = init(i); 
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

	Imprime_Matriz(grafo);

	lista_adj(grafo, vet);

	Imprime_Menu();
	Le_Origem_Destino(MAX_VERTICES - 1, &origem, &destino);

	printf(" Aqui Implementar Distancia entre %s e %s \n", cidades[origem], cidades[destino]);
	printf("%i\n\n", calc_dist(grafo, origem, destino, vet, 0));
	//printlist(vet[origem]);
	//printlist(vet[destino]);




	// for(i = 0; i < 7; i++){
	// 	printlist(vet[i]);
	// }

	for(i = 0; i < 7; i++){
		cleanlist(vet[i]);
	}
	
	return (0);
}


// print lista adj
void print_adj(){
	//
}

// calcula dist
void calc(){
	//
}