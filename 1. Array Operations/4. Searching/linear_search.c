

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
    
    int element=5;
    int found=0;

    //array traversl
    for(int i=0;i<size;i++){
        if(element==arr[i]){
            printf("The element is present in position: %d",i);
            found=1;
            break;
        }
    }
    if (found==0){
        printf("ELEMENT NOT FOUND");
    }
}
    
