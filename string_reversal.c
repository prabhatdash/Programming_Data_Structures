#include<stdio.h>
int main(){
    char str[100];
    int i=0,count=0;
    char str2[100];
    printf("Enter the string:\n");
    scanf("%s",str);
    while(str[i]!='\0'){
        count++;
        i++;
    }
    int j=0;
    for(int i=count-1;i>=0;i--){
       str2[j]=str[i];
       j++;
    }
    
    printf("%s",str2);
    
}