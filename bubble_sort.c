#include<stdio.h>
int main(){
    int arr[]={10,77,1,5,100,20,6,99};
    int size=sizeof(arr)/sizeof(int);
    int temp;
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
             if(arr[j] > arr[j+1]){               
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(int i=0;i<size;i++){
        printf("%d\n",arr[i]);
    }
}
