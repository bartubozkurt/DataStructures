#include <stdio.h>

void selectionSort(int array[], int size);
void printArray(int array[], int size);

int main() {
	
  int data[] = {20, 12, 10, 15, 2};
  int size = sizeof(data) / sizeof(data[0]);
  selectionSort(data, size);
  printf("Sorted array: \n");
  printArray(data, size);
}

void selectionSort(int array[], int size) {
	int i,j;
  for (i = 0; i < size - 1; i++) {
    int min = i;
    for (j = i + 1; j < size; j++) {

      if (array[j] < array[min])
        min= j;
    }
    
	int temp = array[i];
	array[i] = array[min];
	array[min] = temp;
	
  }
}

void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

