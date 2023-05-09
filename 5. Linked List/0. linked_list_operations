#include <stdio.h>
#include <stdlib.h>

struct node {
   int data;
   struct node *next;
};

struct node *head = NULL;

void display() {
   struct node *ptr = head;
   printf("\n[head] =>");
   while(ptr != NULL) {        
      printf(" %d =>",ptr->data);
      ptr = ptr->next;
   }
   printf(" [null]\n");
}

void insert(int data) {
   struct node *link = (struct node*) malloc(sizeof(struct node));
   link->data = data;
   link->next = head;
   head = link;
}

void del(){
// struct node* temp = head;
// while(temp->next->next!=NULL){
//   temp = temp->next;
// }
// temp->next = NULL;

head=head->next;

}

int main() {
   int size,element;
   printf("Enter the number of elements you want to insert in linked list\n");
   scanf("%d",&size);
   for(int i=0;i<size;i++){
       printf("ENTER THE ELEMENT\n");
       scanf("%d",&element);
       insert(element);
   }
   display();
   del();
   display();
   
}