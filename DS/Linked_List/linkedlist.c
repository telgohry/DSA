#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

// Functions Implementation
void createEmptyList(ST_list_t *list)
{
    list->head = NULL;
    list->listSize = 0;
}

int32_t insertAtHeadList(ST_list_t *list, int32_t data)
{
    ST_listNode_t *temp = (ST_listNode_t*)malloc(sizeof(ST_listNode_t));
    temp->data = data;

    temp->next = list->head;
    list->head = temp;
    list->listSize++;
}

int32_t insertAtEndList(ST_list_t *list, int32_t data)
{
    ST_listNode_t *temp = (ST_listNode_t*)malloc(sizeof(ST_listNode_t));

    if(list->head == NULL)
    {
        list->head = temp;
        list->listSize++;
    }
    else
    {
        ST_listNode_t *t = list->head;

        while(t->next != NULL)
        {
            t = t->next;
        }
        t->next = temp;
        list->listSize++;
    }
    temp->data = data;
    temp->next = NULL;
}

int32_t insertToList(ST_list_t *list, int32_t position, int32_t data)
{
    ST_listNode_t *temp = (ST_listNode_t*)malloc(sizeof(ST_listNode_t));
    temp->data = data;

    if(position < 0 || position > list->listSize)
    {
        printf("Invalid position\n");
        return 0;
    }

    ST_listNode_t *t = list->head;

    for(int32_t i=0; i<position-1; i++)
    {
        t = t->next;
    }

    temp->next = t->next;
    t->next = temp;
    list->listSize++;
}


int32_t deleteFromList(ST_list_t *list, int32_t position);

void printList(ST_list_t *list)
{
    if(isListEmpty(list))
    {
        printf("list is empty\n");
        return;
    }

    ST_listNode_t *tempNode = list->head;

    while(tempNode != NULL)
    {
        printf("%d  ", tempNode->data);
        tempNode = tempNode->next;
    }
    printf("\n");
}

int32_t getNodeData(ST_list_t *list, int32_t nodeNumber, int32_t *nodeData);

int32_t isTail(ST_listNode_t node)
{
    if(node.next == NULL)
    {
        return -1;
    }

    return 0;
}

int32_t isListEmpty(ST_list_t *list)
{
    if(list->head == NULL)
    {
        return -1;
    }

    return 0;
}