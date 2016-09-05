#include <stdio.h>
#include <stdlib.h> // using atol()
// 9223372036854775808

long sum(int argc, const char *argv[]) {
  long counter = 0;
  int iter;
  for (iter = 0; iter < argc; iter++) {
    counter = counter + atol(argv[iter]); // counter += atoi(argv[iter]);
  }
  return counter;
}

int main(int argc, const char *argv[]) {
  printf("%ld\n", sum(argc, argv));
  return 0;
}
