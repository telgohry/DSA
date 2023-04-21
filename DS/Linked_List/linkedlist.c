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

    temp->data = data;
    temp->next = NULL;

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
}

int32_t insertToList(ST_list_t *list, int32_t position, int32_t data)
{
    ST_listNode_t *temp = (ST_listNode_t*)malloc(sizeof(ST_listNode_t));
    ST_listNode_t *ptr = list->head;

    if(position == 0)
    {
        temp->data = data;
        temp->next = list->head;
        list->head = temp;
        list->listSize++;
    }
    else if(position > 0 && position <= list->listSize)
    {
        for(uint32_t i=0; i<position-1&&ptr; i++)
        {
            ptr = ptr->next;
        }

        if(ptr)
        {
            temp->data = data;
            temp->next = ptr->next;
            ptr->next = temp;
            list->listSize++;
        }
    }
    else
    {
        printf("Invalid position\n");
    }

}

int32_t insertInSortedList(ST_list_t *list, int32_t data)
{
    ST_listNode_t *p;
    p = list->head;

    if(list->head == NULL || p->data > data)
    {
        insertAtHeadList(list, data);
    }
    else
    {
        ST_listNode_t *q;
        ST_listNode_t *temp;

        temp = (ST_listNode_t*)malloc(sizeof(ST_listNode_t));

        q = NULL;
        temp->data = data;

        while(p->data < data)
        {
            q = p;
            p = p->next;
        }

        temp->next = q->next;
        q->next = temp;
        list->listSize++;
    }
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
    printf("\n\n");
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