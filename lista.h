#ifndef HEADER_FILE_LIST
#define HEADER_FILE_LIST

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>


typedef struct node{
    int dist;
    int self;
    struct node *next;
 } node;

typedef struct list{
    node *start;
    node *end;
    int selflist;
} list;


//cria lista
list* init(int i){
    list *lista = (list*) malloc(sizeof(list));
	if(lista != NULL){
        lista->start = NULL;
        lista->end = NULL;
        lista->selflist = i;
        return lista;
    }
}


// true = vazia
bool empty(list *l){
    return (!l->start);
}


bool insert(list* l, int slf){
    node *aux = l->start;
    node *newnode; 

    // cria novo nó
    newnode = (node*) malloc(sizeof(node));
    if(!newnode) return false;
    newnode->next = NULL;
    newnode->self = slf;

    // insere no inicio
    if(!l->start){ //funciona
        l->start = newnode;
        l->end = newnode;
        return true;

    // insere ultimo
    } else {
        
        //caminha na lista
        while(aux->next){
            aux = aux->next;
        }

        //chega na inserção
        aux->next = newnode;
        l->end = newnode;
        return true;
    }

}


/* // imprime lista
// void printlist(list *l){
//     node *aux = l->start;

//     if(empty(l)){
//         printf("lista vazia\n");
//     } else {
//         printf("[%i]-> ", l->self);

//         while(aux != NULL){
//             printf("[%s]:%i ", aux->rot, aux->dist);
//             aux = aux->next;
//         }
//     }

//     printf("\n");
}*/


//limpa lista
void cleanlist(list *l){
    node *aux = l->start, *aux2;
    while(aux != NULL){
        aux2 = aux->next;
        free(aux);
        aux = aux2;
    }
}

bool search(list *l, int n){
    node *aux = l->start;

    while(aux != NULL){
        if(aux->self == n) return true;
        else aux = aux->next;
    }
    return false;
}

#endif
