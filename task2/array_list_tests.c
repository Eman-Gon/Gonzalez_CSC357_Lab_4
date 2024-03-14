#include "array_list.h"
#include "checkit.h"

void test1() {
ArrayList* list = array_list_new(3);
    int length = 4;
        array_list_add_to_end(list, "apple");
    array_list_add_to_end(list, "banana");
array_list_add_to_end(list, "cherry");
    array_list_add_to_end(list, "date");
checkit_int(list->length, length);
    checkit_int(list->capacity, 6);
     array_list_free(list);
}

void test2() {
    ArrayList* list = array_list_new(2);
int length = 3;
    array_list_add_to_end(list, "cat");
        array_list_add_to_end(list, "dog");
array_list_add_to_end(list, "elephant");
    checkit_int(list->length, length);
checkit_int(list->capacity, 4);

     array_list_free(list);
}

void test3() {
ArrayList* list = array_list_new(10);
    int length = 2;
        array_list_add_to_end(list, "apple");
array_list_add_to_end(list, "banana");
    checkit_int(list->length, length);
        checkit_int(list->capacity, 10);
     array_list_free(list);
}

int main(void) {
    test1();
test2();
    test3();
        return 0;
}