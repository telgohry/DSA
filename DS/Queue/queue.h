


// typedefs
typedef unsigned char uint8_t;
typedef signed char int8_t;


typedef struct ST_Queue_t
{
    int8_t rear;
    int8_t front;
    uint8_t size;
    uint8_t *q;
}ST_Queue_t;

// Functions prototypes
void createEmptyQueue(ST_Queue_t *queue);
int8_t enqueue(ST_Queue_t *queue, int8_t data);
int8_t dequeue(ST_Queue_t *queue, int8_t *data);
int8_t isFull(ST_Queue_t *queue);
int8_t isEmpty(ST_Queue_t *queue);
int8_t printQueue(ST_Queue_t *queue);
int8_t getQueueFront(ST_Queue_t *queue);
int8_t getQueueRear(ST_Queue_t *queue);
