#include<stdio.h>
int main(){
    int rows=0;
    int cols=0;
    printf("ENTER THE NO OF ROWS IN ARRAY:\n");
    scanf("%d",&rows);
    printf("ENTER THE NO OF COLUMNS IN ARRAY:\n");
    scanf("%d",&cols);
    int arr[rows][cols];
    
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("Enter the element in row: %d col: %d\n",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    
    printf("The elements in the array are:\n");
      for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
}