#define _GNU_SOURCE
#ifndef TASK2_H
#define TASK2_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char **elements;  
    size_t capacity;  
    size_t length;    
} ArrayList;

ArrayList* array_list_new(size_t initial_capacity);
void array_list_add_to_end(ArrayList *list, const char *str);
void array_list_free(ArrayList *list);

#endif