#include <stdio.h>
#include <stdlib.h> // using atoi()

int sum(int argc, const char *argv[]) {
  int counter = 0;
  int iter;
  for (iter = 0; iter < argc; iter++) {
    counter = counter + atoi(argv[iter]); // counter += atoi(argv[iter]);
  }
  return counter;
}

int main(int argc, const char *argv[]) {
  int result = sum(argc, argv);
  printf("%d\n", result);
  return 0;
}
