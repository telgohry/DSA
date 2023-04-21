#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

// Functions Implementation
void createEmptyQueue(ST_Queue_t *queue)
{
    printf("Please enter the size of the queue: ");
    scanf("%hhu", &queue->size);
    queue->q = (uint8_t*)calloc(queue->size, sizeof(uint8_t));

    queue->front = -1;
    queue->rear = -1;
}

int8_t enqueue(ST_Queue_t *queue, int8_t data)
{
    if(isFull(queue))
    {
        printf("queue overflow");
        return -1;
    }
    else if(isEmpty(queue))
    {
        queue->front++;
        queue->rear++;
        queue->q[queue->rear] = data;
        return -2;
    }
    else
    {
        queue->rear++;
        queue->q[queue->rear] = data;
        return -2;
    }
}

int8_t dequeue(ST_Queue_t *queue, int8_t *data)
{
    if(isEmpty(queue))
    {
        printf("queue is empty\n");
        return -1;
    }
    else if(queue->front == queue->size-1)
    {
        *data = queue->q[queue->front];
        queue->rear = -1;
        queue->front = -1;
        return -2;
    }
    else
    {
        *data = queue->q[queue->front];
        queue->front++;
        return -2;
    }
}

int8_t isFull(ST_Queue_t *queue)
{
    if(queue->rear == queue->size-1)
    {
        return -1;
    }

    return 0;
}

int8_t isEmpty(ST_Queue_t *queue)
{
    if(queue->front == -1 && queue->rear == -1)
    {
        return -1;
    }

    return 0;
}

int8_t printQueue(ST_Queue_t *queue)
{
    if(isEmpty(queue))
    {
        return -1;
    }

    for(uint8_t i=queue->front; i<=queue->rear; i++)
    {
        printf("%d  ", queue->q[i]);
    }

    printf("\n");
}

int8_t getQueueFront(ST_Queue_t *queue)
{
    if(isEmpty(queue))
    {
        return -1;
    }

    return queue->q[queue->front];
}

int8_t getQueueRear(ST_Queue_t *queue)
{
    if(isEmpty(queue))
    {
        return -1;
    }

    return queue->q[queue->front];
}