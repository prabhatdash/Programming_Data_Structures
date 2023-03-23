#include <stdio.h>

int main() {
int arr[]={5,1,10,4,3,2,45,33,27};
int temp,j;
int size=sizeof(arr)/sizeof(int);
int count=0;
for(int i=1;i<size;i++){
        temp = arr[i]; 
        j = i - 1;
        for(j=j;j>=0&&arr[j]>temp;j--){
            arr[j+1]=arr[j];
        }
        arr[j + 1] = temp;
    }
    
for(int i=0;i<size;i++){
    printf("%d ",arr[i]);
}
}
