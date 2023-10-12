#include "list.h"
#include <stddef.h>
#include <stdlib.h>


list* list_new_random(int size, int range) {
    list* l = list_new(); // Assuming you have a function to create a new list

    if (l == NULL) {
        return NULL; // Handle memory allocation failure
    }

    for (int i = 0; i < size; i++) {
        int random_value = rand() % (range + 1); // Generate a random value in the range [0, range]
        list_add_last(random_value, l); // Assuming you have a list_add_last function
    }

    return l;
}