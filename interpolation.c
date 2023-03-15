#include <stdio.h>
int main()
{
	int arr[] = { 10, 12, 13, 16, 18, 19, 20, 21,
				22, 23, 24, 33, 35, 42, 47 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int x = 23;
	int start=0;
	int stop=n-1;
	int pos;
    int count=0;
	while(1){
	    if (start <= stop && x >= arr[start] && x <= arr[stop]) {
	 
	    pos=start + ((double)(stop-start)/(arr[stop]-arr[start])) * (x-arr[start]);
	    if(arr[pos]==x){
	        printf("The element is present in index: %d",pos);
	        break;
	        
	    }
	    if(arr[pos]<x){
	        start=pos+1;
	    }
	     if(arr[pos]>x){
	        stop=pos-1;
	    }
	}
	}
}
