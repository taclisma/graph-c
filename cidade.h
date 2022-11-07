#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_VERTICES 7

#define LIMITE 32767

#define TRUE  !0
#define FALSE  0
 
char cidades[MAX_VERTICES][30] = {
 						"[0] - (PoA) - Porto Alegre", 
 				      	"[1] - (Spa) - Sao Paulo", 
 				      	"[2] - (Rio) - Rio de janeiro", 
				      	"[3] - (Vit) - Vitoria", 
				      	"[4] - (Rec) - Recife", 
				      	"[5] - (Sal) - Salvador", 
				     	"[6] - (Nat) - Natal"
						 };


typedef struct {
	          char cidade_adj;
	          int cidade_dist;
	         } Tcidade;

char rotulos[MAX_VERTICES][6] = {"PoA", "SPa", "Rio", "Vit", "Rec", "Sal", "Nat"},opcao='S';


// Inicializa_Grafo
void Inicializa_Grafo(Tcidade grafo[][MAX_VERTICES])
{
 int l, c;

 for (l = 0; l < MAX_VERTICES; l++) 
      for (c = 0; c < MAX_VERTICES; c++) 
          {
	grafo[l][c].cidade_dist = -1;
	grafo[l][c].cidade_adj = 'N';
    }
}

//Cria_Aresta
void Cria_Aresta(Tcidade grafo[][MAX_VERTICES], int cid_origem, int cid_destino, int distancia)
{
 grafo[cid_origem][cid_destino].cidade_adj = 'S';
 grafo[cid_origem][cid_destino].cidade_dist = distancia;
}


//  Imprime_Matriz
void Imprime_Matriz(Tcidade grafo[][MAX_VERTICES])
{
 int l, c;

 printf("\n-- Matriz de Adjacencias  --\n");
 printf("\t [c0] \t [c1] \t [c2] \t [c3] \t [c4] \t [c5] \t [c6]\n");
 
 for (l = 0; l < MAX_VERTICES; l++) 
     {
      printf("[L%d]", l);
      for (c = 0; c < MAX_VERTICES; c++) 
       printf("\t%5d ",grafo[l][c].cidade_dist);
      printf("\n");
      }
	printf("\n\n");
}

void Le_Origem_Destino(int tam, int *origem, int *destino)
{
 printf("\n Cidade de Origem  [0..%d]: ",  tam);
 do {
      scanf("%d",origem);
     } while (*origem < 0 || *origem > tam);
 printf(" Cidade de Destino [0..%d]: ", tam);
 do {
      scanf("%d",destino);
     } while (*destino < 0 || *destino > tam);
}


//Imprime_Menu
void Imprime_Menu(void)
{
 int i;

 printf("\n -- Menu Opcoes de Cidades --\n");  

 for (i = 0;i < MAX_VERTICES;i++)
     printf(" %s\n",cidades[i]);
  
}

