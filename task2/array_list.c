#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "array_list.h"

ArrayList* array_list_new(size_t initial_capacity) {
    ArrayList *list = malloc(sizeof(ArrayList));
        if (list == NULL) {
    fprintf(stderr, "Error\n");
            return NULL;
    }

list->elements = malloc(initial_capacity * sizeof(char*));
    if (list->elements == NULL) {
fprintf(stderr, "Error\n");
free(list);
        return NULL;
    }

    list->capacity = initial_capacity;
        list->length = 0;

    return list;
}

void array_list_add_to_end(ArrayList *list, const char *str) {
    if (list->length == list->capacity) {
size_t new_capacity = list->capacity * 2;
        char **new_elements = realloc(list->elements, new_capacity * sizeof(char*));

    if (new_elements == NULL) {
            fprintf(stderr, "Error\n");
        return;
        }

    list->elements = new_elements;
        list->capacity = new_capacity;
    }

char *new_string = malloc((strlen(str) + 1) * sizeof(char));
    if (new_string == NULL) {
fprintf(stderr, "Error.\n");
        return;
    }

    strcpy(new_string, str);
        list->elements[list->length] = new_string;
            list->length++;
}

void array_list_free(ArrayList *list) {
    if (list != NULL) {
        for (size_t i = 0; i < list->length; i++) {
free(list->elements[i]);
        }

free(list->elements);
        free(list);
    }
}