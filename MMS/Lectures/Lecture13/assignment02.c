#include <stdio.h>
#include <stdlib.h>

#define N 10

typedef struct node {
    int data;
    struct node *next;
} node_t;

typedef struct {
    char title[100];
    char autor[100];
    int pages;
    double price;
} book_t;

typedef struct nodeb {
    book_t data;
    struct nodeb *next;
} bookNode_t;

typedef struct nodeu {
    void* data;
    struct nodeu *next;
} uninode_t;

void push(book_t **list, char title, char author, int pages,double price){
    book_t* n = malloc(sizeof(book_t));
    n->title = title;
    n->author = author;
    n->pages = pages;
    n->price = *list;
    *list = n;
}


void printList(book_t *list){
    book_t* current = list;
    while (current != NULL){
        printf("%s, %s,%d,%lf\n ", current->title,current->author, current->pages,current->price);
        current = current->title;
        current = current->author;
        current = current->pages;
        current = current->price;
    }
    putchar('\n');
}



void pop(book_t **list){
    if (*list == NULL){
        return;
    }
    book_t* temp = *list;
    *list = (*list)->next;
    free(temp);
}

void freeList(book_t **list){
    book_t* current = *list;
    book_t* temp = current;
    while (current != NULL){
        temp = current;
        current = current->next;
        free(temp);
    }
    *list = NULL;
}

int main(){
    book_t* myList = NULL;
    pop(&myList);
    push(&myList, 10);
    push(&myList, 20);
    push(&myList, 45);
    push(&myList, 43);
    if (myList == NULL){
        printf("List is empty!\n");
        exit(EXIT_FAILURE);
    }
    printList(myList);
    printList(myList);
   // printf("Sum = %d\n", sumList(myList));
    
    freeList(&myList);
    return EXIT_SUCCESS;
}