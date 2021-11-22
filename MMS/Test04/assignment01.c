
//push 
//free

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define ITEMS_COUNT 100

typedef struct node {
    int data;
    struct node *next;
} node_t;

typedef struct {
    uint16_t number;
    char description[250];
    double weight;
    double price;
} Item;



typedef struct nodeb {
    Item data;
    struct nodeb *next;
} ItemNode_t;

typedef struct nodeu {
    void* data;
    struct nodeu *next;
} uninode_t;

void push(node_t **list, int value){
    node_t* n = malloc(sizeof(node_t));
    n->data = value;
    n->next = *list;
    *list = n;
}

void printList(node_t *list){
    node_t* current = list;
    while (current != NULL){
        printf("%d ", current->data);
        current = current->next;
    }
    putchar('\n');
}

int sumList(node_t *list){
    int sum = 0;
    node_t* current = list;
    while (current != NULL){
        sum += current->data;
        current = current->next;
    }
    return sum;
}

void pop(node_t **list){
    if (*list == NULL){
        return;
    }
    node_t* temp = *list;
    *list = (*list)->next;
    free(temp);
}

void freeList(node_t **list){
    node_t* current = *list;
    node_t* temp = current;
    while (current != NULL){
        temp = current;
        current = current->next;
        free(temp);
    }
    *list = NULL;
}

int main(){
    node_t* myList = NULL;
    pop(&myList);
    push(&myList, 10);
    
    push(&myList, 20);
    push(&myList, 45);
    push(&myList, 43);
    if (myList == NULL){
        printf("List is empty!\n");
        exit(EXIT_FAILURE);
    }

    
    freeList(&myList);
    return EXIT_SUCCESS;
}
