#include "list.h"
#include <stdio.h>

int list_get_last(list *l) {
    if (l == NULL || l->first == NULL) {
        // Handle cases where the list is empty or NULL
        // You can return a default value or handle it as needed
        return 0; // For example, return 0 if the list is empty
    }

    // Traverse the list to find the last node
    node *current = l->first;
    while (current->next != NULL) {
        current = current->next;
    }

    // Return the value of the last node
    return current->val;
}