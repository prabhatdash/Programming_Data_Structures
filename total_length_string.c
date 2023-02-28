#include<stdio.h>
int main(){
    char str[100];
    int i=0,count=0;
    printf("Enter the string:\n");
    scanf("%s",str);
    while(str[i]!='\0'){
        count++;
        i++;
    }
    printf("Total Length of String: %d",count);
}