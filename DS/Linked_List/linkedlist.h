
// typedefs
typedef unsigned char uint8_t;
typedef signed char int8_t;

typedef unsigned short uint16_t;
typedef signed short int16_t;

typedef unsigned int uint32_t;
typedef signed int int32_t;

typedef struct node
{
    int32_t data;
    struct ST_Node_t *next;
}ST_listNode_t;

typedef struct list
{
    ST_listNode_t *head;
    int32_t listSize;
}ST_list_t;

// Functions Prototypes
void createEmptyList(ST_list_t *list);

/*************************************************************************/
/*                         INSERTING IN LINKED LIST                      */
/*************************************************************************/
int32_t insertAtHeadList(ST_list_t *list, int32_t data);
int32_t insertAtEndList(ST_list_t *list, int32_t data);
int32_t insertToList(ST_list_t *list, int32_t position, int32_t data);
int32_t insertInSortedList(ST_list_t *list, int32_t data);
/*************************************************************************/
/*                         DELETING FROM LINKED LIST                     */
/*************************************************************************/
int32_t deleteFromHeadList(ST_list_t *list);
int32_t deleteFromEndList(ST_list_t *list);
int32_t deleteFromList(ST_list_t *list, int32_t position);

void printList(ST_list_t *list);
int32_t getNodeData(ST_list_t *list, int32_t nodeNumber, int32_t *nodeData);
int32_t isTail(ST_listNode_t node);
int32_t isListEmpty(ST_list_t *list);

