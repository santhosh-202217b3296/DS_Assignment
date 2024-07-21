#include <stdio.h>
#include <stdlib.h> // Included for exit() function

#define MAX_SIZE 5 // Maximum size of the queue

void main() {
    int queue[MAX_SIZE];
    int ch = 1, front = 0, rear = 0, i, j = 1;

    printf("Queue using Array\n");
    printf("1. Insertion\n");
    printf("2. Deletion\n");
    printf("3. Display\n");
    printf("4. Exit\n");

    while (ch) {
        printf("\nEnter the Choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                if (rear == MAX_SIZE) {
                    printf("\nQueue is Full\n");
                } else {
                    printf("\nEnter number %d: ", j++);
                    scanf("%d", &queue[rear++]);
                }
                break;

            case 2:
                if (front == rear) {
                    printf("\nQueue is empty\n");
                } else {
                    printf("\nDeleted Element is %d\n", queue[front++]);
                }
                break;

            case 3:
                printf("\nQueue Elements are:\n");
                if (front == rear) {
                    printf("Queue is Empty\n");
                } else {
                    for (i = front; i < rear; i++) {
                        printf("%d\n", queue[i]);
                    }
                }
                break;

            case 4:
                exit(0);

            default:
                printf("Wrong Choice! Please choose a valid option\n");
        }
    }
}
