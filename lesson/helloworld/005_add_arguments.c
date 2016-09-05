#include <stdio.h>
#include <stdlib.h> // using atoi()

int main(int argc, const char *argv[]) {
  printf("%s\n", argv[0]);
  printf("%d\n", atoi(argv[1]) + atoi(argv[2]));
  return 0;
}
