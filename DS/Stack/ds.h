

// typedefs
typedef unsigned char uint8_t;
typedef signed char int8_t;

typedef unsigned short uint16_t;
typedef signed short int16_t;

typedef unsigned int uint32_t;
typedef signed int int32_t;

typedef struct ST_stack_t
{
    uint8_t size;
    int8_t  top;
    uint8_t *stack;
}ST_stack_t;

// functions prototypes
/*
void createEmptyStack(ST_stack_t *stack); // Setting stack's top to -1
void push(ST_stack_t *stack, int32_t data);
uint8_t pop(ST_stack_t *stack);
uint8_t isEmpty(ST_stack_t *stack);
uint8_t isFull(ST_stack_t *stack);
uint8_t printStack(ST_stack_t *stack);
uint8_t getStackTop(ST_stack_t *stack);
uint8_t peak(ST_stack_t stack, uint8_t position);
 */
