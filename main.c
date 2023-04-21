#include <stdio.h>
#include <stdlib.h>
#include "DS/Stack/ds.h"
#include "DS/Queue/queue.h"
#include "ALGORITHMS/algorithms.h"
#include "DS/Linked_List/linkedlist.h"


int main() {
    ST_list_t list;

    createEmptyList(&list);
    insertAtEndList(&list, 5);
    insertAtEndList(&list, 6);
    insertAtEndList(&list, 7);
    printf("size: %d\n", list.listSize);
    printList(&list);

    insertAtHeadList(&list, 2);
    insertAtHeadList(&list, 3);
    printf("size: %d\n", list.listSize);
    printList(&list);

    insertToList(&list, 3, 10);
    printf("size: %d\n", list.listSize);
    printList(&list);


    system("pause");
    return 0;
}
