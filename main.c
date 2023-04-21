#include <stdio.h>
#include <stdlib.h>
#include "DS/Stack/ds.h"
#include "DS/Queue/queue.h"
#include "ALGORITHMS/algorithms.h"
#include "DS/Linked_List/linkedlist.h"


int main() {
    ST_list_t list;

    createEmptyList(&list);


    insertAtEndList(&list, 3);
    printf("size: %d\n", list.listSize);
    printList(&list);

    insertAtEndList(&list, 7);
    printf("size: %d\n", list.listSize);
    printList(&list);

    insertAtEndList(&list, 9);
    printf("size: %d\n", list.listSize);
    printList(&list);

    insertAtEndList(&list, 15);
    printf("size: %d\n", list.listSize);
    printList(&list);

    insertAtEndList(&list, 20);
    printf("size: %d\n", list.listSize);
    printList(&list);

    insertInSortedList(&list, 18);
    printf("size: %d\n", list.listSize);
    printList(&list);

    deleteFromHeadList(&list);
    printf("size: %d\n", list.listSize);
    printList(&list);

    deleteFromHeadList(&list);
    printf("size: %d\n", list.listSize);
    printList(&list);

    deleteFromList(&list, 2);
    printf("size: %d\n", list.listSize);
    printList(&list);

    deleteFromList(&list, 2);
    printf("size: %d\n", list.listSize);
    printList(&list);

    deleteFromList(&list, 1);
    printf("size: %d\n", list.listSize);
    printList(&list);


    system("pause");
    return 0;
}
