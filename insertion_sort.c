#include <stdio.h>

int main() {
int arr[]={5,1,10,4,3,2};
int temp,j;
int size=6;
int count=0;
for(int i=1;i<size;i++){
        temp = arr[i]; 
        j = i - 1;
        printf("\nFOR LOOP NO: %d:\n",i);
        printf("ORIGINAL VALUE OF J:%d\n",j);
        printf("VALUE OF TEMP VAR: %d\n",temp);
        
        while (j >= 0 && arr[j] > temp) {
            count++;
            printf("--------------\n");
            printf("WHILE LOOP NO: %d OF FOR LOOP: %d\n",count,i);
            printf("VALUE OF arr[j+1]: %d\n",arr[j+1]);
            printf("VALUE OF arr[j]: %d\n",arr[j]);
            arr[j + 1] = arr[j];
             printf("AFTER SWAPPING\n");
            printf("VALUE OF arr[j+1]: %d\n",arr[j+1]);
            printf("VALUE OF arr[j]: %d\n",arr[j]);
            j--;
           
            printf("VALUE OF J--: %d\n",j);
            printf("--------------\n");
        }
        arr[j + 1] = temp;
        printf("NEW VALUE OF arr[j+1]: %d\n",arr[j+1]);
        
        count=0;
        for(int k=0;k<size;k++){
        printf("%d\t",arr[k]);
}printf("\n---------------------------------\n");
    }
    
for(int i=0;i<size;i++){
    printf("%d\n",arr[i]);
}
}