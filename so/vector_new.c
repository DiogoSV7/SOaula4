#include "vector.h"
#include <stdlib.h>
vector* vector_new(double x, double y, double z) {
    vector* new_vector = (vector*)malloc(sizeof(vector));
    
    if (new_vector != NULL) {
        new_vector->x = x;
        new_vector->y = y;
        new_vector->z = z;
    }
    
    return new_vector;
}