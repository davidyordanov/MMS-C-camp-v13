#include <stdio.h>

int binarySearch(int* array, size_t n, int key) {

    int low = 0;
    int high = n;
  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (array[mid] == key)
      return mid;

    if (array[mid] < key)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
}

int main(void) {
  int array[] = {30, 40, 50, 60, 70, 80, 90};
  int key = 90;
  int n = 6;
  int result = binarySearch(array, n,key);
  if (result == -1)
    printf("Not found!\n");
  else
    printf("Element is found at index: %d\n", result);
  return 0;
}