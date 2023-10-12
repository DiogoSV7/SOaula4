#include "list.h"
#include <stdlib.h>


void list_remove_last(list *l) {
    node *current = l->first;
    while (current->next->next != NULL) {
        current = current->next;
    }

    // Remove the last node
    free(current->next);
    current->next = NULL;
    l->size--;
}