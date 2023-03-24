#include <stdio.h>
int main() {
int arr[]={5,1,10,4,3,22,21,18};
int temp,min_idx;
int size=sizeof(arr)/sizeof(int);
for(int i=0;i<size-1;i++)
{
    min_idx = i;
    for(int j=i+1;j<size;j++){
        if(arr[j] < arr[min_idx]){
            min_idx = j;
        }
    }
        temp=arr[min_idx];
        arr[min_idx]=arr[i];
        arr[i]=temp;
}
for(int i=0;i<size;i++){
    printf("%d ",arr[i]);
}
}
