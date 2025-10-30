/**
 * Implementation of Queue using Circular Array
 * This implementation provides efficient space utilization
 * by reusing the space after dequeuing elements
 * 
 * Operations:
 * - Enqueue: O(1)
 * - Dequeue: O(1)
 * - Front: O(1)
 * - IsEmpty: O(1)
 * - IsFull: O(1)
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 5

typedef struct {
    int *array;     // Array to store queue elements
    int front;      // Index of front element
    int rear;       // Index of rear element
    int size;       // Current size of queue
    int capacity;   // Maximum capacity of queue
} CircularQueue;

// Function to create a new queue
CircularQueue* createQueue(int capacity) {
    CircularQueue* queue = (CircularQueue*)malloc(sizeof(CircularQueue));
    queue->capacity = capacity;
    queue->front = -1;
    queue->rear = -1;
    queue->size = 0;
    queue->array = (int*)malloc(queue->capacity * sizeof(int));
    return queue;
}

// Function to check if queue is full
int isFull(CircularQueue* queue) {
    return queue->size == queue->capacity;
}

// Function to check if queue is empty
int isEmpty(CircularQueue* queue) {
    return queue->size == 0;
}

// Function to add an element to queue
void enqueue(CircularQueue* queue, int item) {
    if (isFull(queue)) {
        printf("Queue is full! Cannot enqueue %d\n", item);
        return;
    }
    
    queue->rear = (queue->rear + 1) % queue->capacity;
    queue->array[queue->rear] = item;
    
    if (queue->front == -1) {
        queue->front = queue->rear;
    }
    
    queue->size++;
    printf("%d enqueued to queue\n", item);
}

// Function to remove an element from queue
int dequeue(CircularQueue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty!\n");
        return -1;
    }
    
    int item = queue->array[queue->front];
    
    if (queue->front == queue->rear) {
        // Last element being dequeued
        queue->front = -1;
        queue->rear = -1;
    } else {
        queue->front = (queue->front + 1) % queue->capacity;
    }
    
    queue->size--;
    return item;
}

// Function to get front element of queue
int front(CircularQueue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty!\n");
        return -1;
    }
    return queue->array[queue->front];
}

// Function to get rear element of queue
int rear(CircularQueue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty!\n");
        return -1;
    }
    return queue->array[queue->rear];
}

// Function to print the queue
void printQueue(CircularQueue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty!\n");
        return;
    }
    
    printf("Queue elements: ");
    int count = 0;
    int index = queue->front;
    
    while (count < queue->size) {
        printf("%d ", queue->array[index]);
        index = (index + 1) % queue->capacity;
        count++;
    }
    printf("\n");
}

// Function to free the queue memory
void destroyQueue(CircularQueue* queue) {
    free(queue->array);
    free(queue);
}

// Main function to test the implementation
int main() {
    // Create a queue of capacity 5
    CircularQueue* queue = createQueue(MAX_SIZE);
    
    printf("\nTest Case 1: Basic Operations\n");
    printf("-----------------------------\n");
    
    // Test enqueue
    enqueue(queue, 1);
    enqueue(queue, 2);
    enqueue(queue, 3);
    printQueue(queue);
    
    // Test dequeue
    printf("\nDequeued element: %d\n", dequeue(queue));
    printQueue(queue);
    
    // Test front and rear
    printf("Front element: %d\n", front(queue));
    printf("Rear element: %d\n", rear(queue));
    
    printf("\nTest Case 2: Queue Full Condition\n");
    printf("--------------------------------\n");
    
    // Fill the queue
    enqueue(queue, 4);
    enqueue(queue, 5);
    enqueue(queue, 6); // Should print queue full message
    printQueue(queue);
    
    printf("\nTest Case 3: Circular Nature\n");
    printf("--------------------------\n");
    
    // Dequeue few elements
    printf("Dequeued: %d\n", dequeue(queue));
    printf("Dequeued: %d\n", dequeue(queue));
    
    // Enqueue new elements
    enqueue(queue, 7);
    enqueue(queue, 8);
    printQueue(queue);
    
    printf("\nTest Case 4: Empty Queue\n");
    printf("-----------------------\n");
    
    // Empty the queue
    while (!isEmpty(queue)) {
        printf("Dequeued: %d\n", dequeue(queue));
    }
    
    // Try to dequeue from empty queue
    dequeue(queue);
    
    // Clean up
    destroyQueue(queue);
    
    return 0;
}
