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
Vector *vector_create(size_t element_size, size_t capacity)
{
    Vector* v = malloc(sizeof *v);
    if(!v) return NULL;
    v->data = malloc(capacity * element_size);
    if(!v->data){
        free(v);
        return NULL;
    }
    v->capacity = capacity;
    v->element_size = element_size;
    v->size = 0;
    return v;
};
//метод очистки вектора из памяти
void free_vector(Vector *v)
{
    free(v->data);
    free(v);
}
//метод добавление элеметов в вектор
