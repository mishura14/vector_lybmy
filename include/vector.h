#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>



typedef struct{
    void *data;
    size_t capacity;
    size_t element_size;
    size_t size;

}Vector;

//метод создания вектора
Vector *vector_create(size_t element_size, size_t capacity);

//метод очистки вектора из памяти
void free_vector(Vector *v);
