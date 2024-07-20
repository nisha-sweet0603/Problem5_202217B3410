#include <stdio.h>
#include <stdlib.h>

#define n 5

int main() {
    int queue[n], ch = 1, front = -1, rear = -1, i, j = 1;

    printf("Queue using Array");
    printf("\n1. Insertion\n2. Deletion\n3. Display\n4. Exit\n");

    while (ch) {
        printf("\nEnter the Choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                if (rear == n - 1)
                    printf("\nQueue is Full\n");
                else {
                    printf("\nEnter number %d: ", j++);
                    scanf("%d", &queue[++rear]);
                    if (front == -1)  // adjust front if inserting the first element
                        front = 0;
                }
                break;
            case 2:
                if (front == -1 || front > rear) {
                    printf("\nQueue is Empty\n");
                    front = rear = -1;  // reset front and rear for next queue operation
                } else {
                    printf("\nDeleted Element is %d\n", queue[front++]);
                    if (front > rear)  // reset front and rear if queue becomes empty
                        front = rear = -1;
                }
                break;
            case 3:
                if (front == -1 || front > rear)
                    printf("\nQueue is Empty\n");
                else {
                    printf("\nQueue Elements are:\n");
                    for (i = front; i <= rear; i++) {
                        printf("%d\n", queue[i]);
                    }
                }
                break;
            case 4:
                exit(0);
            default:
                printf("Wrong Choice! Please see the options\n");
        }
    }

    return 0;
}
