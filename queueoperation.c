
#include<stdio.h>
#define SIZE 100

int queue[SIZE];
int front = -1;
int rear = -1;

int isFull() {
	return rear == SIZE - 1;
}

int isEmpty() {
	return front ==  -1 || front > rear;
}

void enqueue(int item) {
	if(isFull()) {
		printf("The queue is full, element cannot be enqueued (Overflow) \n");
		return;
	}
	
	if(front == -1) {
		front = 0;
	}
	
	rear++;
	queue[rear] = item;
	printf("Enqueued element: %d \n", item);
}

int dequeue() {
	if(isEmpty()) {
		printf("The queue is empty, element cannot be dequeued (Underflow) \n");
		return -1;
	}
	
	int item = queue[front];
	front++;
	
	if (front > rear) {
        front = rear = -1;
    }
	
	return item;
}

void displayQueue() {
	if(isEmpty()) {
		printf("The queue is empty \n");
		return;
	}
	
	printf("The queue elements \n");
	
	for(int i = front; i <= rear; i++) {
		printf("%d \t", queue[i]);
	}
	
	printf("\n");
}

int main() {
	int choice, element;
	
	while(1) {
		printf("\nChoose an operation form below:\n");
		printf("1. Enqueue\n");
		printf("2. Dequeue\n");
		printf("3. Display Queue\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);
		
		switch (choice)
        {
        case 1:{
            printf("Enter the value");
            scanf("%d",&element);
            enqueue(element);
            break;
        }
        case 2:{
            dequeue();
        }
        case 3:{
            displayQueue();
        }

        default:
            break;
        }
        
    }
    return 0;}
    
    
    