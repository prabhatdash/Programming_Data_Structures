#include<stdio.h>
int main(){
    int size=0;
    printf("ENTER THE SIZE OF ARRAY:\n");
    scanf("%d",&size);
    int arr[size];
    
    for(int i=0;i<size;i++){
        printf("Enter the element no %d:\n",i+1);
        scanf("%d",&arr[i]);
    }
    int pos=0;
    printf("Enter the index position whose value is to be deleted:\n");
    scanf("%d",&pos);
    
    //deletion of element
    for(int i=pos;i<size;i++){
        arr[i]=arr[i+1];
    }
    
    printf("The elements present in the array after deletion are:\n");
    for(int i=0;i<size-1;i++){
        printf("%d ",arr[i]);
    }
    
}