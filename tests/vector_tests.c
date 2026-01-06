#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "vector.h"

int main(){
    Vector *vector = vector_create(sizeof(int), 10);
    if(!vector){
        printf("Failed to create vector\n");
        return 1;
    }
    printf("все тесты прошли успешно\n");
    free_vector(vector);


}
