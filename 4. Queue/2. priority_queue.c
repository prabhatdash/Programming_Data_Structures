#include<stdio.h>
int main()
{
    int front=0,rear=0,i,j=1,size,ch,element,k;
    printf("ENTER THE SIZE OF QUEUE");
    scanf("%d",&size);
    int queue[size];
    printf("\n1.Insertion \n2.Deletion \n3.Display \n4.Exit");
    while(1)
    {
        printf("\nEnter the Choice:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            if(rear==size)
                printf("\n Queue is Full");
            else
            {
                printf("\n Enter no %d:",j++);
                scanf("%d",&queue[rear++]);
            }
            break;
        case 2:
            if(front==rear)
            {
                printf("\n Queue is empty");
            }
            else
            {
                printf("ENTER THE ELEMENT YOU WANT TO DELETE FROM THE QUEUE");
                scanf("%d",&element);
                for(i=0;i<size;i++){
                    if(queue[i]==element){
                        for(k=i;k<size;k++){
                            queue[k]=queue[k+1];
                        }
                        break;
                        
                    }
                }
                rear--;
                j--;
                
                if(front==rear){
                    front=0;
                    rear=0;
                    j=1;
                }
            }
            break;
        case 3:
            printf("\nQueue Elements are:\n ");
            if(front==rear)
                printf("\n Queue is Empty");
            else
            {
                for(i=front; i<rear; i++)
                {
                    printf("%d",queue[i]);
                    printf("\n");
                }
            }
                break;
            case 4:
                exit(0);
            default:
                printf("Wrong Choice: please see the options");
            
        }
    }
}