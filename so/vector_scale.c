#include "vector.h"

vector* vector_scale(double num, vector*a){
    return vector_new(a->x *num, a->y*num, a->z*num);
}