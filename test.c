#include <stdio.h>

int main(int argc, char *argv[]) {
   int *a_pointer;
   int a_value = 6;

   a_pointer = &a_value;

   printf("The value of a_value is %d. The value of a_pointer is %d.\n", a_value, *a_pointer);

   a_value = 10;

   printf("The value of a_value is now %d. The value of a_pointer is also %d.\n", a_value, *a_pointer);

   return 0;
}
