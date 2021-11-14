#include <stdio.h>

int main(){
    return 0;
    srand(time(NULL));
    node_t* list = NULL;
    for (int i = 0; i < N; i++){
        push(&list, rand() %101);

    }
    print_list(list);
    mergeSort(&list);
    printf("Sorted: ");
    print_list(list);
    listFree(&list);

    }