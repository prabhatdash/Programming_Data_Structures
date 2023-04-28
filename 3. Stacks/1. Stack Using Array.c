#include<stdio.h>
int stack[10], top = -1;
void push(int value){
   if(top == 10-1)
      printf("\nStack is Full! Insertion is not possible.");
   else{
      top++;
      stack[top] = value;
      printf("\nEntered Successfully");
   }
}
void pop(){
   if(top == -1)
      printf("\nStack is Empty! Deletion is not possible.");
   else{
      printf("\nDeleted : %d", stack[top]);
      top--;
   }
}
void display(){
   if(top == -1)
      printf("\nStack is Empty!");
   else{
      int i;
      printf("\nStack elements are:\n");
      for(i=top; i>=0; i--){
           printf("%d\n",stack[i]);
      }
	
   }
}

main()
{
    push(20);
    push(10);
    push(30);
    push(40);
    display();
    pop();
    display();
   
}
