#include <stdio.h>
#include "ctype.h"

int main(void) {
  printf("is digit? '9': %d 'b':%d '3': %d\n", isdigit('9'), isdigit('b'), isdigit('3'));
  printf("is lower? 'A': %d 'b':%d '3': %d\n", islower('A'), islower('b'), islower('3'));
  
  return 0;
}
