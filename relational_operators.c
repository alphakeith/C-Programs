#include <stdio.h>

/*
            <                 is less than
            <=                is greater than or equal to
            >                 is greater than
            >=                is greater than or equal to
            ==                is equal to
            !=                is not equal to

                                                                    */
#include <stdio.h>

int main() {
  // declaration
  int a = 14, b = 2;

  // 0 is false
  // 1 is true

  // display
  printf("The value of %i < %i is %i.\n", a, b, a < b);
  printf("The value of %i <= %i is %i.\n", a, b, a <= b);
  printf("The value of %i > %i is %i.\n", a, b, a > b);
  printf("The value of %i >= %i is %i.\n", a, b, a >= b);
  printf("The value of %i == %i is %i.\n", a, b, a == b);
  printf("The value of %i != %i is %i.\n", a, b, a != b);

  return 0;
}