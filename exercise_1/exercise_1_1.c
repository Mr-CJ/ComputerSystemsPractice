#include "stdio.h"

double question_A() {
  float alpha = 1500/2500.0;
  float k = 150/100.0;
  double s = 1/((1 - alpha) + alpha/k);
  return s;
}

float question_B() {
  float alpha = 1500/2500.0;
  float s = 1.67;
  float k = alpha/(1/s + alpha - 1);
  return k * 100;
}

int main() {
  double answer_A = question_A();
  float answer_B = question_B();
  printf("The speed promotion rate is %f times\n", answer_A);
  printf("The minium speed is %f km/h\n", answer_B);
}