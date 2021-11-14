#include <stdio.h>
#include <stdlib.h>

struct myDynamicArray{
    int *values;
    int capacity;
    int curElementCount;
};
struct myDynamicArray createDynamicArray(int initialSize){
    struct myDynamicArray arr;
    arr.values = (int *)malloc(initialSize*sizeof(int));
    if(!arr.values){
        printf("Could not allocate dynamic memory\n");
        arr.capacity =0;
        arr.curElementCount = 0;
        exit(0);
    }
    arr.capacity = initialSize;
    arr.curElementCount= 0;
    return arr;
}

void printArr(struct myDynamicArray arr){
    for (int i = 0; i < arr.curElementCount; i++)
    {
        printf("%d, ",arr.values[i]);
    }
      printf("\n");
}
void resize(struct myDynamicArray *arr, int newCapacity){
    int *oldValues = arr->values;
    arr->values=(int*)realloc(arr->values, newCapacity*sizeof(int));
    printf("Resizing array from capacity= %d to new size = %d\n", arr->capacity, newCapacity);
    arr->capacity=newCapacity;
    if (!arr->values){
        arr->capacity = 0;
        arr->curElementCount =0;
        free(oldValues);
        printf("Could not realloc\n");
        exit(0);
    }
    
}
void popElem(struct myDynamicArray *arr){
    if(arr->curElementCount==0){
        printf("Array is empty");
        return;
    }
    arr->curElementCount--;
    if (arr->curElementCount*2>=arr->capacity){
        resize(arr, arr->capacity/2);
    }
    
}

void pushElem(struct myDynamicArray *arr, int newElem){
    if (arr->curElementCount==arr->capacity){
      //resize(arr, arr->capacity+3);
      // resize(arr, arr->capacity+200);
      resize(arr, arr->capacity*2);
    }
    arr->values[arr->curElementCount++]=newElem;
    //arr->curElementCount++;
    
}
void deleteArr(struct myDynamicArray *arr){
    arr->capacity =0;
    arr->curElementCount =0;
    free(arr->values);
}

int main(void) {
    struct myDynamicArray arr1 = createDynamicArray(100);
  for (int i = 0; i < 1000; i++)
  {
      pushElem(&arr1,i);
  }
  
  popElem(&arr1);
  popElem(&arr1);
  popElem(&arr1);
  popElem(&arr1);
  popElem(&arr1);
  popElem(&arr1);

//arr.curElemCount=0;
    printArr(arr1);
    free(arr1.values);
   


  return 0;
}
