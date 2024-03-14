#include "checkit.h"
#include "task1.h"

void test1() {
   char input[] = "Hello THERE";
   char result[15];
   char *expected = "hello there";

   str_lower(input, result);

   checkit_string(result, expected);
}

void test2() {
   char input[] = "MiXeD CaSe 123!";
   char result[20];
   char *expected = "mixed case 123!";

   str_lower(input, result);

   checkit_string(result, expected);
}

void test3() {
   char input[] = "";
   char result[1];
   char *expected = "";

   str_lower(input, result);

   checkit_string(result, expected);
}

int main(void) {
   test1();
   test2();
   test3();
   return 0;
}