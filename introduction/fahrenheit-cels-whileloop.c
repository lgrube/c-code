#include <stdio.h>

main() {
  float fahr, cels;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;
  printf("%s hello here is the conversion table\n");
  while(fahr <= upper) {
    cels = (5.0/9.0) * (fahr-32.0);
    printf("%3.0f %6.1f\n", fahr, cels);
    fahr = fahr + step;
  }
}
