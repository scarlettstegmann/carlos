#include <stdio.h>
#include <math.h>

double max_unsigned(double size) {
  return pow(2, size * 8);
}

double max_signed(double size) {
  return pow(2, size * 8) / 2;
}

int main(int argc, const char *argv[]) {
  double s_int = sizeof(int);
  double s_long = sizeof(long);

  printf("%.0f\n", s_int);
  printf("%.0f\n", s_long);
  printf("%.0f\n", max_signed(s_int));
  printf("%.0f\n", max_signed(s_long));
  printf("%.0f\n", max_unsigned(s_int));
  printf("%.0f\n", max_unsigned(s_long));
  return 0;
}
