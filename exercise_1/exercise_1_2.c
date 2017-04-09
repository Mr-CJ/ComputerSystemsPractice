#include "stdio.h"

int main() {
  float alpha = 0.8;
  float s = 2.0;
  float k = alpha/(1/s + alpha - 1);

  printf("This part must have been promote %f%%.\n", k);
}