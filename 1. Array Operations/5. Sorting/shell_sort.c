#include <stdio.h>

int main() {
  int arr[] = {10,9,6,4,1,7,5};
  int size = sizeof(arr) / sizeof(int);
  int i,j,temp,gap;
  for (gap = size / 2; gap > 0; gap=gap/2) {
    for (i = gap; i < size; i++) {
      temp = arr[i];
      for (j = i; j>= gap && arr[j - gap] > temp; j=j-gap) {
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