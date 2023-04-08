#include<stdio.h>
int main(){
    int size=0;
    printf("ENTER THE SIZE OF ARRAY:\n");
    scanf("%d",&size);
    int arr[size];
    
    //array insertion
    for(int i=0;i<size;i++){
        printf("Enter the element no %d:\n",i+1);
        scanf("%d",&arr[i]);
    }

    //array traversl
    printf("The elements present in the array are:\n");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    
}