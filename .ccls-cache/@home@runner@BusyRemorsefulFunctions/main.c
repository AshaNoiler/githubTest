#include <stdio.h>

double multiply(double *num1, double *num2);

int main(void) {
  double num1, num2;
  printf("enter 2 nums to multiply these nums\n");
  scanf(" %lf %lf", &num1, &num2);
  multiply(&num1, &num2);
  return 0;
}