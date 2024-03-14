#include <ctype.h>
#include "task1.h"
#include <stdio.h>
#include <stdlib.h>
#include "checkit.h"

void str_lower(char *orig, char *copy) {
    if (orig == NULL || copy == NULL) 
        return;

    while (*orig != '\0') { 
        *copy = tolower(*orig);
        orig++;
        copy++;
    }

    *copy = '\0';
}
  
void str_lower_mutate(char *orig) {
    if (orig == NULL) {
        return;
    }

    while (*orig != '\0') {
       
        if (*orig >= 'A' && *orig <= 'Z') {
            
            *orig += 32;
        }
      
        orig++;
    }
}