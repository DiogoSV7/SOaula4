#include "list.h"
#include <stdio.h>

void list_print(list* l) {
    if (l == NULL || l->first == NULL) {
        // Handle cases where the list is empty or NULL
        return;
    }

    node* current = l->first;
    
    while (current != NULL) {
        // Assuming that each element in the list has an integer value.
        printf("%d ", current->val);  // Modify this line according to your data type.
        current = current->next;
    }
}