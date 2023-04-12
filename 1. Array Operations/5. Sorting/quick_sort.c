#include<stdio.h>
void quicksort(int arr[25],int start,int stop){
   int i, j, pivot, temp;
   if(start<stop){
      pivot=start;
      i=start;
      j=stop;
      while(i<j){
         while(arr[i]<=arr[pivot]&&i<stop)
            i++;
         while(arr[j]>arr[pivot])
            j--;
         if(i<j){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
         }
      }
      temp=arr[pivot];
      arr[pivot]=arr[j];
      arr[j]=temp;
      quicksort(arr,start,j-1);
      quicksort(arr,j+1,stop);
   }
}
int main(){
   int i;
   int arr[]={5,6,4,2,9,1,8,7};
   int size=sizeof(arr)/sizeof(int);
   int start=0, stop =size-1;
   quicksort(arr,start,stop);
   for(i=0;i<size;i++)
      printf(" %d",arr[i]);
}