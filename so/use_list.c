#include "list.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char** argv) {
    srand(time(NULL));

    list* l1 = list_new(1, 2, 3, 4, 5, 6, 7);
    list* l2 = list_new(10, 20, 30, 40);
    list* l3 = list_new(100, 200, 300);
    list* l4 = list_new(1000, 2000);
    list* l5 = list_new(10000);

    list_add_first(44, l1);
    list_add_last(6, l4);

    int x1 = list_get_first(l5);
    int x2 = list_get_last(l2);

    list_remove_first(l3);
    list_remove_last(l5);

    int size = list_size(l5);
    list_print(l3);

    // Free memory used by the lists
    list_free(l1);
    list_free(l2);
    list_free(l3);
    list_free(l4);
    list_free(l5);

    return 0;
}