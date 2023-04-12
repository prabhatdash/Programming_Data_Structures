#include <stdio.h>

int main() {
  int arr[] = {10,9,6,4,1,7,5};
  int size = sizeof(arr) / sizeof(arr[0]);
  
  for (int gap = size / 2; gap > 0; gap=gap/2) {
    for (int i = gap; i < size; i++) {
      int temp = arr[i];
      for (int j = i; j>= gap && arr[j - gap] > temp; j=j-gap) {
        arr[j] = arr[j - gap];
      }
      arr[j] = temp;
    }
  }
printf("Sorted arr: \n");
 for (int i = 0; i < size;i++) {
    printf("%d  ", arr[i]);
  }
}