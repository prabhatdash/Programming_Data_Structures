#include<stdio.h>

int bs(int arr[],int start,int stop,int element){
    if(stop>=start){
        int mid=start+(stop-start)/2;
        if(arr[mid]==element){
            return mid;
        }
        else if(arr[mid]>element){
            return bs(arr,start,mid-1,element);
        }
        else if(arr[mid]<element){
            return bs(arr,mid+1,stop,element);
        }
    }
    return -1;
}

int main(){
    int arr[]={1,2,3,4,5};
    int element=15;
    int start=0;
    int count=0;
    int stop=sizeof(arr)/sizeof(int);
    int result=bs(arr,start,stop,element);
    if(result==-1){
        printf("ELEMENT NOT PRESENT IN ARRAY");
    }
    else{
        printf("%d",result);
    }
}