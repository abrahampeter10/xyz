#include<stdio.h>


#define size 5
int front = -1, rear = -1;
int queue[size];

void display();
void enqueue();
void dequeue();

int main(){
    int choice,item;
    while(1) {
        printf("\nQueue Operations\n");
        printf("1. Display\n");
        printf("2. Enqueue\n");
        printf("3. Dequeue\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
       switch (choice) {
            case 1:
                display();
                break;
            case 2:
          
                printf("Enter the element to be inserted: ");
                scanf("%d", &item);
                enqueue(item);
                break;
            case 3:
                dequeue();
                break;
            case 4:
                printf("Exiting program.\n");
                break;
            default:
                printf("Enter a valid option\n");
                break;
        }
    } while (choice != 4);

    return 0;
}

void enqueue(int item){
 if((rear+1)% size==front){
     printf("Queue is full\n");
 }
    if(front==-1){
        front = rear = 0;
    }else{
        
        rear = (rear + 1) % size;
        queue[rear]=item;
    }

            


void dequeue(){
    
if(front=rear=-1){
    printf("Queue is empty");
}else{
    printf("Element %d has been deleted", queue[front]);
    front=(front+1)%size;
}

}}

void display(){
   
        if(front==-1)
	printf("Empty queue \n");
	else{
	printf("Queue : \n");
	for(int i=front; i<=rear; i++)
	printf("%d ",queue[i]);
	printf("\n");
	}
}