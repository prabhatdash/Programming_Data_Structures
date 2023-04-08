#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5};
    int element=5;
    int start=0;
    int count=0;
    int stop=sizeof(arr)/sizeof(int);
    
    while(1){
        int mid=start+(stop-start)/2;
        if(arr[mid]==element){
            printf("%d",mid);
            break;
        }
        else if(arr[mid]>element){
             stop=mid-1;
        }
        else if(arr[mid]<element){
            start=mid+1;
        }
    count++;
    if(count>stop){
        printf("ELEMENT NOT PRESENT IN THE ARRAY");
        break;
    }
    }
}