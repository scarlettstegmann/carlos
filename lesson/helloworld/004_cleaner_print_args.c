#include <stdio.h>

void print_program_arguments(int total, const char *arguments[]) {
  int i;
  for (i = 0; i < total; i++) {
    printf("argv[%d] = %s\n", i, arguments[i]);
  }
}

int main(int argc, const char *argv[]) {
  printf("Hello World!\n");
  print_program_arguments(argc, argv);
  return 0;
}
